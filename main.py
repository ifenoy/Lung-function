import serial        
import time

import os
import sys

import numpy as np

import matplotlib.pyplot as plt
import matplotlib.animation as animation

import csv

import re
import threading

from mpl_toolkits.mplot3d import Axes3D

from matplotlib.backends.backend_tkagg import (
    FigureCanvasTkAgg, NavigationToolbar2Tk)

import tkinter as tk
from tkinter import ttk
from tkinter.messagebox import showerror
from threading import Thread
import requests




class GetData(Thread):
    def __init__(self, out_data, puerto, SegundosMostrados, TiempoMuestreo):
        super().__init__()
        try:
            self.serialArduino = serial.Serial(puerto,115200,timeout=1.0)
        except:
            showerror(title='Error',
                      message='Error en la coneccion con el arduino')
            self.Muestrando = False
            return
        self.out_data = out_data
        self.SegundosMostrados = SegundosMostrados
        self.TiempoMuestreo = TiempoMuestreo
        self.Nmuestras = int(SegundosMostrados/TiempoMuestreo)
        self.Muestrando = True
        self.line = ()


    def run(self):
        while self.Muestrando:
            self.column = 0
            try:
                self.line = self.serialArduino.readline().decode('ascii')
                #print(self.line)
                
                for i in self.line.split(","): # Recorremos los campos que hemos recibido
                    if self.column <4:
                        self.out_data[self.column].append(float(i))  # Asignamos a cada columna de los datos para pintar, la columna correspondiente del input
                    self.column = self.column + 1
                
            except:
                pass
               
                        
            if len(self.out_data[0]) > self.Nmuestras:
                self.out_data[3].append((self.out_data[3][-1])+(self.out_data[0][-1])*self.TiempoMuestreo-(self.out_data[0][0])*self.TiempoMuestreo)
                self.out_data[0].pop(0)
            if len(self.out_data[1]) > self.Nmuestras:
                self.out_data[1].pop(0)
            if len(self.out_data[2]) > self.Nmuestras:
                self.out_data[2].pop(0)       
            if len(self.out_data[3]) > self.Nmuestras:
                self.out_data[3].pop(0)
            if len(self.out_data[4]) > self.Nmuestras:
                self.out_data[4].pop(0) 

            
            
    def _desconectar(self):
        self.Muestrando = False
        self.serialArduino.flushInput()
        self.serialArduino.flushOutput()
        self.serialArduino.close()
        
    def _enviar(self,cad):
        self.serialArduino.write(cad.encode('ascii'))

        
        

class Entorno(tk.Tk):
    def __init__(self):
        super().__init__()

        self.title('Programa')
        #self.geometry('1000x1000')
        #self.resizable(0, 0)
        
        self._leer_set()
        
        self.SegundosMostrados=float(self.Set['SegundosMostrados'])
        
        self.VolumenArduino=float(self.Set['VolumenArduino'])
        self.VelocidadInicial=float(self.Set['VelocidadInicial'])
        self.VelocidadFinal=float(self.Set['VelocidadFinal'])
        
        self.Cantidad=float(self.Set['Cantidad'])
        
        self.TiempoPaso=float(self.Set['TiempoPaso'])
        self.DeltaPaso=float(self.Set['DeltaPaso'])
        
        self.TiempoMuestreo=float(self.Set['TiempoMuestreo'])
        
        self.Nmuestras=int(self.SegundosMostrados/self.TiempoMuestreo)

        
        self.gData = [[0] * self.Nmuestras,[0] *self.Nmuestras,[0] *self.Nmuestras,[0] *self.Nmuestras,[0] *self.Nmuestras,]
        
        #self.Puerto = self.Set[2][1]
        self.Puerto = self.Set['Puerto']


        self.create_header_frame()
        self.create_body_plot()
        self.create_body_frame()
        #self.create_footer_frame()
        #self.Muestrando = False
        
    def create_header_frame(self):

        self.header = ttk.Frame(self)
        # configure the grid
        self.header.columnconfigure(0, weight=1)
        self.header.columnconfigure(1, weight=1)
        self.header.columnconfigure(2, weight=1)
        self.header.columnconfigure(3, weight=1)



        # Conectar button
        self.conectar_button = ttk.Button(self.header, text='Conectar')
        self.conectar_button['command'] = self._conectar
        self.conectar_button.grid(column=0, row=1)
        # Desconectar button
        self.desconectar_button = ttk.Button(self.header, text='Desconectar')
        self.desconectar_button['command'] = self._desconectar
        self.desconectar_button.grid(column=1, row=1)
         # Salir button
        self.salir_button = ttk.Button(self.header, text='Salir')
        self.salir_button['command'] = self._quit
        self.salir_button.grid(column=2, row=1)
        

        
        # attach the header frame
        self.header.grid(column=0, row=0, sticky=tk.NSEW)
        
    def create_body_plot(self):
        
        self.fig_flujo_presion_steps_volumen, (self.ax_flujo, self.ax_presion,self.ax_steps, self.ax_volumen) = plt.subplots(4,1)
        self.fig_resistencia_compliance, (self.ax_resistencia, self.ax_compliance) = plt.subplots(2,1)
        self.fig_resistencia_compliance_sen, (self.ax_resistencia_sen, self.ax_compliance_sen) = plt.subplots(2,1)

        # intialize two line objects (one in each axes)
        self.line_flujo, = self.ax_flujo.plot([], [], lw=2)
        self.line_presion, = self.ax_presion.plot([], [], lw=2, color='r')
        self.line_steps, = self.ax_steps.plot([], [], lw=2, color='g')
        self.line_volumen, = self.ax_volumen.plot([], [], lw=2, color='b')
        self.hl_flujo_presion_steps_volumen = [self.line_flujo, self.line_presion, self.line_steps, self.line_volumen]
        
        self.line_resistencia, = self.ax_resistencia.plot([], [], lw=2)
        self.line_compliance, = self.ax_compliance.plot([], [], lw=2, color='r')
        self.hl_resistencia_compliance = [self.line_resistencia, self.line_compliance]
        
        self.line_resistencia_sen, = self.ax_resistencia_sen.plot([], [], lw=2)
        self.line_compliance_sen, = self.ax_compliance_sen.plot([], [], lw=2, color='r')
        self.hl_resistencia_compliance_sen = [self.line_resistencia_sen, self.line_compliance_sen]
        
        self.ax_flujo.set_ylim(-1024, 1024)
        self.ax_flujo.set_xlim(0, self.SegundosMostrados)
        self.ax_flujo.grid()
        
        self.ax_presion.set_ylim(0, 1024)
        self.ax_presion.set_xlim(0, self.SegundosMostrados)
        self.ax_presion.grid()
        
        self.ax_steps.set_ylim(0, 1024)
        self.ax_steps.set_xlim(0, self.SegundosMostrados)
        self.ax_steps.grid()
        
        self.ax_volumen.set_ylim(0, 1024)
        self.ax_volumen.set_xlim(0, self.SegundosMostrados)
        self.ax_volumen.grid()
        
        self.ax_resistencia.set_ylim(-1024, 1024)
        self.ax_resistencia.set_xlim(-1024, 1024)
        self.ax_resistencia.grid()
        
        self.ax_compliance.set_ylim(-1024, 1024)
        self.ax_compliance.set_xlim(-1024, 1024)
        self.ax_compliance.grid()
        
        self.ax_resistencia_sen.set_ylim(-1024, 1024)
        self.ax_resistencia_sen.set_xlim(-1024, 1024)
        self.ax_resistencia_sen.grid()
        
        self.ax_compliance_sen.set_ylim(-1024, 1024)
        self.ax_compliance_sen.set_xlim(-1024, 1024)
        self.ax_compliance_sen.grid()
        
        self.canvas_flujo_presion_steps_volumen =  FigureCanvasTkAgg(self.fig_flujo_presion_steps_volumen, master=self)
        self.canvas_flujo_presion_steps_volumen.draw()
        
        self.canvas_resistencia_compliance =  FigureCanvasTkAgg(self.fig_resistencia_compliance, master=self)
        self.canvas_resistencia_compliance.draw()
        
        self.canvas_resistencia_compliance_sen =  FigureCanvasTkAgg(self.fig_resistencia_compliance_sen, master=self)
        self.canvas_resistencia_compliance_sen.draw()

        self.toolbar_flujo_presion_volumen = NavigationToolbar2Tk(self.canvas_flujo_presion_steps_volumen, self, pack_toolbar=False)
        self.toolbar_flujo_presion_volumen.update()
        
        self.toolbar_resistencia_compliance = NavigationToolbar2Tk(self.canvas_resistencia_compliance, self, pack_toolbar=False)
        self.toolbar_resistencia_compliance.update()
        
        self.toolbar_resistencia_compliance_sen = NavigationToolbar2Tk(self.canvas_resistencia_compliance_sen, self, pack_toolbar=False)
        self.toolbar_resistencia_compliance_sen.update()
        
        self.canvas_flujo_presion_steps_volumen.get_tk_widget().grid(column=0, row=1)
        
        self.canvas_resistencia_compliance.get_tk_widget().grid(column=1, row=1)
        
        self.canvas_resistencia_compliance_sen.get_tk_widget().grid(column=1, row=2)
        
        self.ani_flujo_presion_steps_volumen = animation.FuncAnimation(self.fig_flujo_presion_steps_volumen, update_line_flujo_presion_steps_volumen, fargs=(self.hl_flujo_presion_steps_volumen, self.gData, self.SegundosMostrados, self.TiempoMuestreo),interval=50, blit=False)
        
        self.ani_resistencia_compliance = animation.FuncAnimation(self.fig_resistencia_compliance, update_line_resistencia_compliance, fargs=(self.hl_resistencia_compliance, self.gData),interval=50, blit=False)
        
        self.ani_resistencia_compliance_sen = animation.FuncAnimation(self.fig_resistencia_compliance_sen, update_line_resistencia_compliance_sen, fargs=(self.hl_resistencia_compliance_sen, self.gData),interval=50, blit=False)
 
    def create_body_frame(self):

        self.body = ttk.Frame(self)
        
        self.header.rowconfigure(0, weight=2)
        self.header.rowconfigure(1, weight=2)
        self.header.rowconfigure(2, weight=2)
        self.header.rowconfigure(3, weight=2)


        # salvar button
        self.salvar_button = ttk.Button(self.body, text='Salvar')
        self.salvar_button['command'] = self._salvar
        self.salvar_button.grid(column=3, row=0)
        
        # Set Arduino button
        self.setArduino_button = ttk.Button(self.body, text='Set Arduino')
        self.setArduino_button['command'] = self._set_arduino
        self.setArduino_button.grid(column=4, row=0)
        
        # Set Stop Arduino button
        self.setArduino_button = ttk.Button(self.body, text='Stop Arduino')
        self.setArduino_button['command'] = self._stop_arduino
        self.setArduino_button.grid(column=5, row=0)
        
        # set button
        self.set_button = ttk.Button(self.body, text='set')
        self.set_button['command'] = self._set
        self.set_button.grid(column=2, row=0)
        
        #texto tiempo
        self.label = ttk.Label(self.body, text='segundos')
        self.label.grid(column=2, row=2)
        
        
        #entry tiempo
        self.tiempo_var = tk.IntVar(value=self.Set['SegundosMostrados'])
        self.tiempo_entry = ttk.Entry(self.body,
                                   textvariable=self.tiempo_var,
                                   width=10)

        self.tiempo_entry.grid(column=2, row=3)
        
        
        #texto Volumen arduino
        self.label = ttk.Label(self.body, text='Volumen Arduino')
        self.label.grid(column=3, row=2)
        
        #entry Volumens arduino
        self.VolumenArduino_var = tk.IntVar(value=self.Set['VolumenArduino'])
        self.VolumenArduino_entry = ttk.Entry(self.body,
                                   textvariable=self.VolumenArduino_var,
                                   width=10)

        self.VolumenArduino_entry.grid(column=3, row=3)
        
        #texto VelocidadInicial
        self.label = ttk.Label(self.body, text='Velocidad Inicial')
        self.label.grid(column=4, row=2)
        
        #entry VelocidadInicial
        self.VelocidadInicial_var = tk.StringVar(value=self.Set['VelocidadInicial'])
        self.VelocidadInicial_entry = ttk.Entry(self.body,
                                   textvariable=self.VelocidadInicial_var,
                                   width=10)

        self.VelocidadInicial_entry.grid(column=4, row=3)
        
        #texto VelocidadInicial
        self.label = ttk.Label(self.body, text='Velocidad Final')
        self.label.grid(column=5, row=2)
        
        #entry VelocidadInicial
        self.VelocidadFinal_var = tk.StringVar(value=self.Set['VelocidadFinal'])
        self.VelocidadFinal_entry = ttk.Entry(self.body,
                                   textvariable=self.VelocidadFinal_var,
                                   width=10)

        self.VelocidadFinal_entry.grid(column=5, row=3)
        
        #texto Cantidad
        self.label = ttk.Label(self.body, text='Cantidad')
        self.label.grid(column=6, row=2)
        
        #entry Cantidad
        self.Cantidad_var = tk.StringVar(value=self.Set['Cantidad'])
        self.Cantidad_entry = ttk.Entry(self.body,
                                   textvariable=self.Cantidad_var,
                                   width=10)

        self.Cantidad_entry.grid(column=6, row=3)
        
        
        # attach the body frame
        self.body.grid(column=2, row=1)
    
    def _conectar(self):
        # Configuramos y lanzamos el hilo encargado de leer datos del serial
        try:
            if self.Muestreo.is_alive():
                pass
            else:
                self.Muestreo = GetData(self.gData, self.Puerto, self.SegundosMostrados, self.TiempoMuestreo)
                self.Muestreo.start()
        except:
            try:
                self.Muestreo = GetData(self.gData, self.Puerto, self.SegundosMostrados, self.TiempoMuestreo)
                self.Muestreo.start()
            except:
                pass
                        
    def _desconectar(self):
        try:
            if self.Muestreo.is_alive():
                self.Muestreo._desconectar()
        except:
            pass
        
    def _salvar(self):
        self.path= tk.filedialog.asksaveasfilename(title = "Select A File", filetypes = (("All Files", "*.*"),("Python files", "*.png"), ("mp4", "*.mp4"), ("wmv", "*.wmv"), ("avi", "*.avi")))
        os.mkdir(self.path)
        with open(self.path+'/Data.txt', 'w') as self.file:
            writer = csv.writer(self.file,delimiter=',')
            writer.writerow(self.gData)
            self.file.close()
        with open(self.path+'/Set.txt', 'w') as self.file:
            writer = csv.writer(self.file,delimiter=',')
            writer.writerow(['SegundosMostrados' , str(self.Set['SegundosMostrados'])])
            writer.writerow(['TiempoMuestreo',str(self.Set['TiempoMuestreo'])])
            writer.writerow(['Puerto', str(self.Set['Puerto'])])
            writer.writerow(['VolumenArduino', str(self.Set['VolumenArduino'])])
            writer.writerow(['VelocidadInicial', str(self.Set['VelocidadInicial'])])
            writer.writerow(['VelocidadFinal', str(self.Set['VelocidadFinal'])])
            writer.writerow(['Cantidad', str(self.Set['Cantidad'])])
            writer.writerow(['TiempoPaso', str(self.Set['TiempoPaso'])])
            writer.writerow(['DeltaPaso', str(self.Set['DeltaPaso'])])
            self.file.close()
        self.fig_flujo_presion_steps_volumen.savefig(self.path+'/fig_flujo_presion_steps_volumen.jpg')
        self.fig_resistencia_compliance.savefig(self.path+'/resistencia_compliance.jpg')
    
    def _set_arduino(self):
        

        try:
            if float(self.VolumenArduino_var.get())>0: 
                self.Set['VolumenArduino']=float(self.VolumenArduino_var.get())
            if float(self.VelocidadInicial_var.get())>0: 
                self.Set['VelocidadInicial']=float(self.VelocidadInicial_var.get())
            if float(self.VelocidadFinal_var.get())>0: 
                self.Set['VelocidadFinal']=float(self.VelocidadFinal_var.get())
            if float(self.Cantidad_var.get())>0: 
                self.Set['Cantidad']=float(self.Cantidad_var.get())    
                
            self.Set['TiempoPaso']= 1.0/(146*self.Set['VelocidadInicial']) # ml por paso *velocidad = frecuencia // periodo=1/f    
            self.Set['DeltaPaso']= ((1.0/(1460*self.Set['VelocidadFinal']))-self.Set['TiempoPaso']) / self.Set['Cantidad']# ml por paso *velocidad = frecuencia // periodo=1/f    
        except:
            pass
            
        print("Set," + str(self.Set['VolumenArduino'])+ ',' + str((self.Set['TiempoPaso']*1000000.0))+ ',' + str((self.Set['DeltaPaso']*1000000.0))+ ',' + str(self.Set['Cantidad']))
        if self.Muestreo.is_alive():
            self.Muestreo._enviar("Set," + str(self.Set['VolumenArduino'])+ ',' + str((self.Set['TiempoPaso']*1000000.0))+ ',' + str((self.Set['DeltaPaso']*1000000.0))+ ',' + str(self.Set['Cantidad']))
    
    def _stop_arduino(self):
 
        if self.Muestreo.is_alive():
            print("Set," + str(0)+ ',' + str(1000))
            self.Muestreo._enviar("Set," + str(0)+ ',' + str(1000))


            
        
    def _set(self):
        
        self._desconectar()
        
        
        try:
            if self.tiempo_var.get()>0: 
                self.Set['SegundosMostrados']=self.tiempo_var.get()
        except:
            pass
        
        try:
            if float(self.VolumenArduino_var.get())>0: 
                self.Set['VolumenArduino']=float(self.VolumenArduino_var.get())
            if float(self.VelocidadInicial_var.get())>0: 
                self.Set['VelocidadInicial']=float(self.VelocidadInicial_var.get())
            if float(self.VelocidadFinal_var.get())>0: 
                self.Set['VelocidadFinal']=float(self.VelocidadFinal_var.get())
            if float(self.Cantidad_var.get())>0: 
                self.Set['Cantidad']=float(self.Cantidad_var.get())    
                
            self.Set['TiempoPaso']= 1.0/(146*self.Set['VelocidadInicial']) # ml por paso *velocidad = frecuencia // periodo=1/f    
            self.Set['DeltaPaso']= ((1.0/(146*self.Set['VelocidadFinal']))-self.Set['TiempoPaso']) / self.Set['Cantidad']# ml por paso *velocidad = frecuencia // periodo=1/f
        except:
            pass
        
        
        
        
        self._guerdar_set()
        self._restart()
        
    

    def _leer_set(self):
        try:
            with open('Set/Set.csv') as self.file:
                self.rows = csv.reader(self.file)
                self.Set={}
                for self.row in self.rows:
                    if not self.row:    # Saltea filas sin datos
                        continue
                    self.row = [func(val) for func, val in zip([str,str], self.row) ]
                    self.Set[self.row[0]]=self.row[1]
                self.file.close()

                 
        except:
            showerror(title='Error',message="Error al leer el Set")
            #self._quit()
            
    def _guerdar_set(self):
        try:
            with open('Set/Set.csv', 'w') as self.file:
                writer = csv.writer(self.file,delimiter=',')
                writer.writerow(['SegundosMostrados' , str(self.Set['SegundosMostrados'])])
                writer.writerow(['TiempoMuestreo',str(self.Set['TiempoMuestreo'])])
                writer.writerow(['Puerto', str(self.Set['Puerto'])])
                writer.writerow(['VolumenArduino', str(self.Set['VolumenArduino'])])
                writer.writerow(['VelocidadInicial', str(self.Set['VelocidadInicial'])])
                writer.writerow(['VelocidadFinal', str(self.Set['VelocidadFinal'])])
                writer.writerow(['Cantidad', str(self.Set['Cantidad'])])
                writer.writerow(['TiempoPaso', str(self.Set['TiempoPaso'])])
                writer.writerow(['DeltaPaso', str(self.Set['DeltaPaso'])])
                self.file.close()
        except:
            showerror(title='Error',
                      message="Error al guardar el Set")
            
            
    
    def _restart(self):
        try:
            if self.Muestreo.is_alive():
                self.Muestreo._desconectar()
        except:
            pass
        
        
        self.quit()     # stops mainloop
        self.destroy()  # this is necessary on Windows to prevent
                            
        sys.stdout.flush()
        os.system("main.py 1") 
        
    def _quit(self):
        try:
            if self.Muestreo.is_alive():
                self.Muestreo._desconectar()
        except:
            pass
        self.quit()     # stops mainloop
        self.destroy()  # this is necessary on Windows to prevent
                            # Fatal Python Error: PyEval_RestoreThread: NULL tstate
        
        
                 


def update_line_flujo_presion_steps_volumen(aux, hl_flujo_presion_steps_volumen, data, SegundosMostrados, TiempoMuestreo):
    hl_flujo_presion_steps_volumen[0].set_data(np.arange(0,SegundosMostrados,TiempoMuestreo), data[0])
    hl_flujo_presion_steps_volumen[1].set_data(np.arange(0,SegundosMostrados,TiempoMuestreo), data[1])
    hl_flujo_presion_steps_volumen[2].set_data(np.arange(0,SegundosMostrados,TiempoMuestreo), data[2])
    hl_flujo_presion_steps_volumen[3].set_data(np.arange(0,SegundosMostrados,TiempoMuestreo), data[3])
    return hl_flujo_presion_steps_volumen,

def update_line_resistencia_compliance(aux, hl_resistencia_compliance, data):
    hl_resistencia_compliance[0].set_data(data[1], data[0])
    hl_resistencia_compliance[1].set_data(data[1], data[3])
    return hl_resistencia_compliance,

def update_line_resistencia_compliance_sen(aux, hl_resistencia_compliance_sen, data):
    hl_resistencia_compliance_sen[0].set_data(data[1], data[4])
    hl_resistencia_compliance_sen[1].set_data(data[1], data[2])
    return hl_resistencia_compliance_sen,






App = Entorno()
App.mainloop()

