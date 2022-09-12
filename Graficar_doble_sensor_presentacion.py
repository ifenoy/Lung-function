# -*- coding: utf-8 -*-
"""
Created on Thu Aug 18 10:37:15 2022

@author: ezeca
"""

import serial        
import time

import os
import sys

import numpy as np

import scipy.signal 

from matplotlib.figure import Figure

import matplotlib.pyplot as plt
import matplotlib.animation as animation

import csv

import re
import threading

from mpl_toolkits.mplot3d import Axes3D

from matplotlib.backends.backend_tkagg import (FigureCanvasTkAgg, 
NavigationToolbar2Tk)

import tkinter as tk
from tkinter import ttk
from tkinter.messagebox import showerror




class Entorno(tk.Tk):
    def __init__(self):
        super().__init__()


        self.create_header_frame()
        
        
    def create_header_frame(self):

        self.header = ttk.Frame(self)
        # configure the grid
        self.header.columnconfigure(0, weight=1)
        self.header.columnconfigure(1, weight=1)
        self.header.columnconfigure(2, weight=1)
        self.header.columnconfigure(3, weight=1)


         # Leer button
        self.leer_button = ttk.Button(self.header, text='Leer')
        self.leer_button['command'] = self._leer
        self.leer_button.grid(column=1, row=1)
        
        
        
        # Salir button
        self.salir_button = ttk.Button(self.header, text='Salir')
        self.salir_button['command'] = self._quit
        self.salir_button.grid(column=2, row=1)
        
        
        # Entrada Label
        self.Lebel_var = tk.StringVar(value='Label')
        self.Lebel_entry = ttk.Entry(self.header,
                                   textvariable=self.Lebel_var,
                                   width=10)
       
        self.Lebel_entry.grid(column=3, row=1)
        
        self.Color_Combo = ttk.Combobox(self.header,
            values=['b','g','r','c','m','y','k','w']
            )

        self.Color_Combo.grid(column=4, row=1)
        
        # attach the header frame
        self.header.grid(column=0, row=0, sticky=tk.NSEW)
        
    def create_body_plot(self):
        
        # Agregar button
        self.agregar_button = ttk.Button(self.header, text='Agregar')
        self.agregar_button['command'] = self._agregar
        self.agregar_button.grid(column=5, row=1)
        
        self.body = ttk.Frame(self)
        
        self.form_titulos = {'fontname':'calibri'}
        
        
        self.flujo_tiempo, self.ax_flujo_tiempo = plt.subplots(figsize=(5,4))
        self.flujo_tiempo.subplots_adjust(left  = 0.2,hspace = 0.4)
      
        self.presion_tiempo, self.ax_presion_tiempo = plt.subplots(figsize=(5,4))
        self.presion_tiempo.subplots_adjust(left  = 0.2,hspace = 0.4)
        self.volumen_ventilado_tiempo, self.ax_volumen_ventilado_tiempo = plt.subplots(figsize=(5,4))
        self.volumen_ventilado_tiempo.subplots_adjust(left  = 0.2,hspace = 0.4)
        self.volumen_integrado_y_presion_tiempo, self.ax_volumen_integrado_y_presion_tiempo = plt.subplots(figsize=(5,4))
        self.volumen_integrado_y_presion_tiempo.subplots_adjust(left  = 0.2,hspace = 0.4)
        
        self.presion_flujo, self.ax_presion_flujo = plt.subplots(figsize=(5,4))
        self.presion_flujo.subplots_adjust(left  = 0.2,hspace = 0.4)
        self.presion_volumen, self.ax_presion_volumen = plt.subplots(figsize=(5,4))
        self.presion_flujo.subplots_adjust(left  = 0.2,hspace = 0.4)
        
        
        self.flujo= self.gData[0]
        
        
        #for a in range(1,6):
            #self.flujo[len(self.flujo)-a] = 0
            
        
        self.t = np.arange(0,len(self.flujo)*float(self.Set['TiempoMuestreo']),float(self.Set['TiempoMuestreo']))
        
        
        
        
        self.presion = self.gData[4]
        
        self.volumen_ventilado=self.gData[3]
        
        self.index=[]
        
        self.auxJ =0;
        self.auxK =0;
        self.index_primer_0 =0;
        while self.auxJ < len(self.volumen_ventilado):
            if self.volumen_ventilado[self.auxJ] == 0:
                self.index_primer_0 = self.auxJ;
                self.auxK = self.auxJ;
                while (self.auxK < len(self.volumen_ventilado)) and (self.volumen_ventilado[self.auxK] == 0) :
                    self.auxK = self.auxK +1;
                self.index.append(int(self.auxJ+((self.auxK-self.auxJ)/2)))
                self.auxJ=self.auxK
            self.auxJ = self.auxJ +1;
        
        #print( self.index)
        
        
        self.ciclos_flujo=[]
        self.ciclos_t=[]
        self.ciclos_presion=[]
        self.ciclos_volumen_ventilado=[]
        self.n_ciclo = 0
        
        
        for i in range(0,len(self.index)-1,2):
            
            self.ciclos_flujo.append(self.flujo[self.index[i]:self.index[i+1]])
            self.ciclos_t.append(np.arange(0,len(self.ciclos_flujo[self.n_ciclo])*float(self.Set['TiempoMuestreo']),float(self.Set['TiempoMuestreo'])))
            self.ciclos_presion.append(self.presion[self.index[i]:self.index[i+1]])
            self.ciclos_volumen_ventilado.append(self.volumen_ventilado[self.index[i]:self.index[i+1]])
            self.n_ciclo = self.n_ciclo+1
            
        #print(len(self.ciclos_flujo))

        #print(self.ciclos_flujo)
        #print(self.n_ciclo)
        
        #for i in range(1, len(self.aux), 2):
         #   self.ciclos_flujo.append[self.flujo[self.aux[i]:self.aux[i+1]]]
        #print(self.ciclos_flujo)
        self.ciclos_volumen_integrado=[]
        for i in range(0,self.n_ciclo):   
            self.aux = [element * float(self.Set['TiempoMuestreo']) for element in self.ciclos_flujo[i]]
            self.ciclos_volumen_integrado.append(np.cumsum(self.aux))



        
        self.ax_flujo_tiempo.plot(self.t,self.flujo)

        
        self.ax_flujo_tiempo.set_xlabel('t [s]')
        self.ax_flujo_tiempo.set_ylabel('Flujo [ml/s]')
        self.ax_flujo_tiempo.set_title('Flujo sensado', **self.form_titulos)
        self.ax_flujo_tiempo.grid()
        
        self.ax_presion_tiempo.plot(self.t,self.presion)

        
        self.ax_presion_tiempo.set_xlabel('t [s]')  
        self.ax_presion_tiempo.set_ylabel('Presion [kPa]')
        self.ax_presion_tiempo.set_title('Presion sensada', **self.form_titulos)
        self.ax_presion_tiempo.grid()
        
        self.ax_volumen_ventilado_tiempo.plot(self.t,self.volumen_ventilado)
        
        self.ax_volumen_ventilado_tiempo.set_xlabel('t [s]')
        self.ax_volumen_ventilado_tiempo.set_ylabel('Volumen [ml]')
        self.ax_volumen_ventilado_tiempo.set_title('Volumen ventilado', **self.form_titulos)
        self.ax_volumen_ventilado_tiempo.grid()
        
        
        

        self.ax_volumen_integrado_y_presion_tiempo.plot(self.ciclos_volumen_integrado[0],self.Color_Combo.get(), label=self.Lebel_var.get())
        for i in range(1,self.n_ciclo):  
            self.ax_volumen_integrado_y_presion_tiempo.plot(self.ciclos_volumen_integrado[i],self.Color_Combo.get())
           # self.ax_volumen_integrado_y_presion_tiempo.plot(self.ciclos_flujo[i])
            #self.ax_volumen_integrado_y_presion_tiempo.plot(self.ciclos_volumen_ventilado[i])
            
        self.ax_volumen_integrado_y_presion_tiempo.set_xlabel('t [s]')
        self.ax_volumen_integrado_y_presion_tiempo.set_ylabel('Volumen [ml]')
        self.ax_volumen_integrado_y_presion_tiempo.set_title('Volumen integrado', **self.form_titulos)
        self.ax_volumen_integrado_y_presion_tiempo.grid()
        self.ax_volumen_integrado_y_presion_tiempo.legend()


        self.pendientes = []
        self.ordenada_origen = []
        self.max_presion =[]
        self.min_presion =[]
        self.max_volumen =[]
        self.index_max_presion = []
        self.index_min_presion = []
        self.index_max_volumen = []
        self.index_080_max_presion = []
        self.index_025_presion = []
        for i in range(self.n_ciclo):
            #print(i)
            self.ciclos_presion_np = np.array(self.ciclos_presion[i])
            self.ciclos_volumen_np = np.array(self.ciclos_volumen_integrado[i])
            self.max_presion.append(np.amax(self.ciclos_presion_np))
            self.min_presion.append(np.nanmin(self.ciclos_presion_np))
            self.max_volumen.append(np.amax(self.ciclos_volumen_np))
            #print(self.max_volumen)
            self.index_max_presion.append(self.ciclos_presion[i].index(self.max_presion[i]))
            self.index_min_presion.append(self.ciclos_presion[i].index(self.min_presion[i]))
            #print((np.where(self.ciclos_volumen_integrado[i] == self.max_volumen[i])[0])[0])
            self.index_max_volumen.append(int((np.where(self.ciclos_volumen_integrado[i] == self.max_volumen[i])[0])[0]))
            #print(self.index_max_volumen)
            #self.max_presion[i] * 0.5
            self.index_080_max_presion.append((np.abs(self.ciclos_presion_np[self.index_max_presion[i]:] - 0.784532).argmin())+self.index_max_presion[i])
            #self.index_025_presion.append((np.abs(self.ciclos_presion_np[self.index_max_presion[i]:]  - 0.2942).argmin())+self.index_max_presion[i])
            self.index_025_presion=self.index_min_presion
            self.pendientes.append((self.ciclos_volumen_integrado[i][self.index_025_presion[i]]-self.ciclos_volumen_integrado[i][self.index_080_max_presion[i]])/(self.ciclos_presion[i][self.index_025_presion[i]]-self.ciclos_presion[i][self.index_080_max_presion[i]]))
            self.ordenada_origen.append(self.ciclos_volumen_integrado[i][self.index_025_presion[i]] - self.pendientes[i] * self.ciclos_presion[i][self.index_025_presion[i]])
        
        #print(self.index_max_volumen)
        print('Las pendientes son:')
        print(self.pendientes)
        print('Le promedio es')
        self.promedio =0
        self.error_estandar = 0
        self.desviacion_estandar= 0
        self.error_estandar = 0
        for element in self.pendientes:
            self.promedio = self.promedio + element
        self.promedio = self.promedio / self.n_ciclo
        print(self.promedio)
        
        for element in self.pendientes:
            self.desviacion_estandar = self.desviacion_estandar + (element - self.promedio) * (element - self.promedio)
        
        self.desviacion_estandar = np.sqrt(self.desviacion_estandar / self.n_ciclo)
        #print('desviacion estanda es')
        #print(self.desviacion_estandar)
        #print('Error estanda es')
        self.error_estandar = float(self.desviacion_estandar) / float(np.sqrt(self.n_ciclo))
        #print(self.error_estandar)
        

        
        #print(self.ordenada_origen)
        #print(self.max_presion)
        #print(self.index_max_presion)
        #print(self.index_025_presion)
              
        self.ax_presion_volumen.plot(self.ciclos_presion[0],self.ciclos_volumen_integrado[0],self.Color_Combo.get(), label=self.Lebel_var.get())
        for i in range(1,self.n_ciclo):
            self.ax_presion_volumen.plot(self.ciclos_presion[i],self.ciclos_volumen_integrado[i],self.Color_Combo.get())
        
        #aux_t = np.arange(-1,self.ciclos_presion[0][self.index_080_max_presion[0]],0.01)
        aux_t = np.arange(-1,1.5,0.01)
        self.ax_presion_volumen.plot(aux_t,  aux_t* self.pendientes[0] + self.ordenada_origen[0],'k--')
        
        #for i in range(0,self.n_ciclo):
        #    self.ax_presion_volumen.plot([self.ciclos_presion[i][self.index_025_presion[i]],self.ciclos_presion[i][self.index_080_max_presion[i]]],[self.ciclos_volumen_integrado[i][self.index_025_presion[i]],self.ciclos_volumen_integrado[i][self.index_080_max_presion[i]]],'.')
        #    aux_t = np.arange(-1,self.ciclos_presion[i][self.index_080_max_presion[i]],0.01)
        #    self.ax_presion_volumen.plot(aux_t,  aux_t* self.pendientes[i] + self.ordenada_origen[i],'--')
        
        #self.ax_presion_volumen.plot(self.ciclos_presion[2],self.ciclos_volumen_integrado[2],'g')
        #self.ax_presion_volumen.plot(self.ciclos_presion[3],self.ciclos_volumen_integrado[3],'c')
        #self.ax_presion_volumen.plot(self.ciclos_presion[4],self.ciclos_volumen_integrado[4],'m')
       


        self.ax_presion_volumen.set_ylabel('Volumen [ml]')
        self.ax_presion_volumen.set_xlabel('Presion [kPa]')
        self.ax_presion_volumen.set_title('Volumen integrado vs Presion sensada', **self.form_titulos)
        self.ax_presion_volumen.grid()
        self.ax_presion_volumen.legend()
        
        for i in range(0,self.n_ciclo):  
            self.ax_presion_flujo.plot(self.ciclos_presion[i],self.ciclos_flujo[i],'.-')
            
        #self.ax_presion_flujo.plot(self.ciclos_presion[0],self.ciclos_flujo[0],'b')
        #self.ax_presion_flujo.plot(self.ciclos_presion[1],self.ciclos_flujo[1],'b')
        #self.ax_presion_flujo.plot(self.ciclos_presion[4],self.ciclos_flujo[4],'g')
        
        self.ax_presion_flujo.set_ylabel('Flujo [ml/s]')
        self.ax_presion_flujo.set_xlabel('Presion [kPa]')
        self.ax_presion_flujo.set_title('Flujo sensado vs Presion sensada', **self.form_titulos)
        self.ax_presion_flujo.grid()
        

        
        self.canvas_flujo_tiempo = FigureCanvasTkAgg(self.flujo_tiempo, master=self)  # A tk.DrawingArea.
        self.canvas_flujo_tiempo.draw()
        self.canvas_flujo_tiempo.get_tk_widget().grid(column=0, row=1)
        self.canvas_presion_tiempo = FigureCanvasTkAgg(self.presion_tiempo, master=self)  # A tk.DrawingArea.
        self.canvas_presion_tiempo.draw()
        self.canvas_presion_tiempo.get_tk_widget().grid(column=0, row=3)
        self.canvas_volumen_ventilado_tiempo = FigureCanvasTkAgg(self.volumen_ventilado_tiempo, master=self)  # A tk.DrawingArea.
        self.canvas_volumen_ventilado_tiempo.draw()
        self.canvas_volumen_ventilado_tiempo.get_tk_widget().grid(column=1, row=1)
        self.canvas_volumen_integrado_y_presion_tiempo = FigureCanvasTkAgg(self.volumen_integrado_y_presion_tiempo, master=self)  # A tk.DrawingArea.
        self.canvas_volumen_integrado_y_presion_tiempo.draw()
        self.canvas_volumen_integrado_y_presion_tiempo.get_tk_widget().grid(column=1, row=3)
        self.canvas_presion_volumen = FigureCanvasTkAgg(self.presion_volumen, master=self)  # A tk.DrawingArea.
        self.canvas_presion_volumen.draw()
        self.canvas_presion_volumen.get_tk_widget().grid(column=2, row=1)
        self.canvas_presion_flujo = FigureCanvasTkAgg(self.presion_flujo, master=self)  # A tk.DrawingArea.
        self.canvas_presion_flujo.draw()
        self.canvas_presion_flujo.get_tk_widget().grid(column=2, row=3)

        
        self.toolbar_canvas_flujo_tiempo = NavigationToolbar2Tk(self.canvas_flujo_tiempo,self.body)
        self.toolbar_canvas_flujo_tiempo.update()
        self.toolbar_presion_tiempo = NavigationToolbar2Tk(self.canvas_presion_tiempo,self.body)
        self.toolbar_presion_tiempo.update()
        self.toolbar_volumen_ventilado_tiempo = NavigationToolbar2Tk(self.canvas_volumen_ventilado_tiempo,self.body)
        self.toolbar_volumen_ventilado_tiempo.update()
        self.toolbar_volumen_integrado_y_presion_tiempo = NavigationToolbar2Tk(self.canvas_volumen_integrado_y_presion_tiempo,self.body)
        self.toolbar_volumen_integrado_y_presion_tiempo.update()
        self.toolbar_presion_volumen = NavigationToolbar2Tk(self.canvas_presion_volumen,self.body)
        self.toolbar_presion_volumen.update()
        self.toolbar_presion_flujo = NavigationToolbar2Tk(self.canvas_presion_flujo,self.body)
        self.toolbar_presion_flujo.update()

        self.body.grid(column=1, row=1, sticky=tk.NSEW)

    def agregar_plot(self):
        
    
        
        self.flujo= self.gData[0]
        
        
        #for a in range(1,6):
            #self.flujo[len(self.flujo)-a] = 0
            
        
        self.t = np.arange(0,len(self.flujo)*float(self.Set['TiempoMuestreo']),float(self.Set['TiempoMuestreo']))
        
        
        
        self.presion = self.gData[4]
        
        self.volumen_ventilado=self.gData[3]
        
        self.index=[]
        
        self.auxJ =0;
        self.auxK =0;
        self.index_primer_0 =0;
        while self.auxJ < len(self.volumen_ventilado):
            if self.volumen_ventilado[self.auxJ] == 0:
                self.index_primer_0 = self.auxJ;
                self.auxK = self.auxJ;
                while (self.auxK < len(self.volumen_ventilado)) and (self.volumen_ventilado[self.auxK] == 0) :
                    self.auxK = self.auxK +1;
                self.index.append(int(self.auxJ+((self.auxK-self.auxJ)/2)))
                self.auxJ=self.auxK
            self.auxJ = self.auxJ +1;
        
        #print( self.index)
        
        
        self.ciclos_flujo=[]
        self.ciclos_t=[]
        self.ciclos_presion=[]
        self.ciclos_volumen_ventilado=[]
        self.n_ciclo = 0
        
        
        for i in range(0,len(self.index)-1,2):
            
            self.ciclos_flujo.append(self.flujo[self.index[i]:self.index[i+1]])
            self.ciclos_t.append(np.arange(0,len(self.ciclos_flujo[self.n_ciclo])*float(self.Set['TiempoMuestreo']),float(self.Set['TiempoMuestreo'])))
            self.ciclos_presion.append(self.presion[self.index[i]:self.index[i+1]])
            self.ciclos_volumen_ventilado.append(self.volumen_ventilado[self.index[i]:self.index[i+1]])
            self.n_ciclo = self.n_ciclo+1
            
        print(len(self.ciclos_flujo))

        #print(self.ciclos_flujo)
        #print(self.n_ciclo)
        
        #for i in range(1, len(self.aux), 2):
         #   self.ciclos_flujo.append[self.flujo[self.aux[i]:self.aux[i+1]]]
        #print(self.ciclos_flujo)
        self.ciclos_volumen_integrado=[]
        for i in range(0,self.n_ciclo):   
            self.aux = [element * float(self.Set['TiempoMuestreo']) for element in self.ciclos_flujo[i]]
            self.ciclos_volumen_integrado.append(np.cumsum(self.aux))



        
        self.ax_flujo_tiempo.plot(self.t,self.flujo)

        
        self.ax_flujo_tiempo.set_xlabel('t [s]')
        self.ax_flujo_tiempo.set_ylabel('Flujo [ml/s]')
        self.ax_flujo_tiempo.set_title('Flujo sensado', **self.form_titulos)
        #self.ax_flujo_tiempo.grid()
        
        self.ax_presion_tiempo.plot(self.t,self.presion)

        
        self.ax_presion_tiempo.set_xlabel('t [s]')  
        self.ax_presion_tiempo.set_ylabel('Presion [kPa]')
        self.ax_presion_tiempo.set_title('Presion sensada', **self.form_titulos)
        #self.ax_presion_tiempo.grid()
        
        self.ax_volumen_ventilado_tiempo.plot(self.t,self.volumen_ventilado)
        
        self.ax_volumen_ventilado_tiempo.set_xlabel('t [s]')
        self.ax_volumen_ventilado_tiempo.set_ylabel('Volumen [ml]')
        self.ax_volumen_ventilado_tiempo.set_title('Volumen ventilado', **self.form_titulos)
        #self.ax_volumen_ventilado_tiempo.grid()
        

        
        for i in range(0,self.n_ciclo):  
            self.ax_volumen_integrado_y_presion_tiempo.plot(self.ciclos_volumen_integrado[i])
           # self.ax_volumen_integrado_y_presion_tiempo.plot(self.ciclos_flujo[i])
            #self.ax_volumen_integrado_y_presion_tiempo.plot(self.ciclos_volumen_ventilado[i])
            
        self.ax_volumen_integrado_y_presion_tiempo.set_xlabel('t [s]')
        self.ax_volumen_integrado_y_presion_tiempo.set_ylabel('Volumen [ml]')
        self.ax_volumen_integrado_y_presion_tiempo.set_title('Volumen integrado', **self.form_titulos)
        self.ax_volumen_integrado_y_presion_tiempo.grid()
        


        
        
        self.pendientes = []
        self.ordenada_origen = []
        self.max_presion =[]
        self.min_presion =[]
        self.max_volumen =[]
        self.index_max_presion = []
        self.index_min_presion = []
        self.index_max_volumen = []
        self.index_080_max_presion = []
        self.index_025_presion = []
        for i in range(self.n_ciclo):
            #print(i)
           self.ciclos_presion_np = np.array(self.ciclos_presion[i])
           self.ciclos_volumen_np = np.array(self.ciclos_volumen_integrado[i])
           self.max_presion.append(np.amax(self.ciclos_presion_np))
           self.min_presion.append(np.nanmin(self.ciclos_presion_np))
           self.max_volumen.append(np.amax(self.ciclos_volumen_np))
           #print(self.max_volumen)
           self.index_max_presion.append(self.ciclos_presion[i].index(self.max_presion[i]))
           self.index_min_presion.append(self.ciclos_presion[i].index(self.min_presion[i]))
           #print((np.where(self.ciclos_volumen_integrado[i] == self.max_volumen[i])[0])[0])
           self.index_max_volumen.append(int((np.where(self.ciclos_volumen_integrado[i] == self.max_volumen[i])[0])[0]))
           #print(self.index_max_volumen)
           #self.max_presion[i] * 0.5
           self.index_080_max_presion.append((np.abs(self.ciclos_presion_np[self.index_max_presion[i]:] - 0.784532).argmin())+self.index_max_presion[i])
           #self.index_025_presion.append((np.abs(self.ciclos_presion_np[self.index_max_presion[i]:]  - 0.2942).argmin())+self.index_max_presion[i])
           self.index_025_presion=self.index_min_presion
           self.pendientes.append((self.ciclos_volumen_integrado[i][self.index_025_presion[i]]-self.ciclos_volumen_integrado[i][self.index_080_max_presion[i]])/(self.ciclos_presion[i][self.index_025_presion[i]]-self.ciclos_presion[i][self.index_080_max_presion[i]]))
           self.ordenada_origen.append(self.ciclos_volumen_integrado[i][self.index_025_presion[i]] - self.pendientes[i] * self.ciclos_presion[i][self.index_025_presion[i]])
       
       #print(self.index_max_volumen)
        print('Las pendientes son:')
        print(self.pendientes)
        print('Le promedio es')
        self.promedio =0
        self.error_estandar = 0
        self.desviacion_estandar= 0
        self.error_estandar = 0
        for element in self.pendientes:
            self.promedio = self.promedio + element
        self.promedio = self.promedio / self.n_ciclo
        print(self.promedio)
        
        for element in self.pendientes:
            self.desviacion_estandar = self.desviacion_estandar + (element - self.promedio) * (element - self.promedio)
       
        self.desviacion_estandar = np.sqrt(self.desviacion_estandar / self.n_ciclo)
        #print('desviacion estanda es')
        #print(self.desviacion_estandar)
        #print('Error estanda es')
        self.error_estandar = float(self.desviacion_estandar) / float(np.sqrt(self.n_ciclo))
        #print(self.error_estandar)
       

       
        #print(self.ordenada_origen)
        #print(self.max_presion)
        #print(self.index_max_presion)
        #print(self.index_025_presion)
             
        self.ax_presion_volumen.plot(self.ciclos_presion[0],self.ciclos_volumen_integrado[0],self.Color_Combo.get(), label=self.Lebel_var.get())
        for i in range(1,self.n_ciclo):
            self.ax_presion_volumen.plot(self.ciclos_presion[i],self.ciclos_volumen_integrado[i],self.Color_Combo.get())
       
        #aux_t = np.arange(-1,self.ciclos_presion[0][self.index_080_max_presion[0]],0.01)
        aux_t = np.arange(-1,1.5,0.01)
        self.ax_presion_volumen.plot(aux_t,  aux_t* self.pendientes[0] + self.ordenada_origen[0],'k--')
       
       #for i in range(0,self.n_ciclo):
       #    self.ax_presion_volumen.plot([self.ciclos_presion[i][self.index_025_presion[i]],self.ciclos_presion[i][self.index_080_max_presion[i]]],[self.ciclos_volumen_integrado[i][self.index_025_presion[i]],self.ciclos_volumen_integrado[i][self.index_080_max_presion[i]]],'.')
       #    aux_t = np.arange(-1,self.ciclos_presion[i][self.index_080_max_presion[i]],0.01)
       #    self.ax_presion_volumen.plot(aux_t,  aux_t* self.pendientes[i] + self.ordenada_origen[i],'--')
       


        self.ax_presion_volumen.set_ylabel('Volumen [ml]')
        self.ax_presion_volumen.set_xlabel('Presion [kPa]')
        self.ax_presion_volumen.set_title('Volumen integrado vs Presion sensada', **self.form_titulos)
        self.ax_presion_volumen.legend()
        #self.ax_presion_volumen.grid()
        
        for i in range(0,self.n_ciclo):  
            self.ax_presion_flujo.plot(self.ciclos_presion[i],self.ciclos_flujo[i],'.-')
            
        #self.ax_presion_flujo.plot(self.ciclos_presion[0],self.ciclos_flujo[0],'b')
        #self.ax_presion_flujo.plot(self.ciclos_presion[1],self.ciclos_flujo[1],'b')
        #self.ax_presion_flujo.plot(self.ciclos_presion[4],self.ciclos_flujo[4],'g')
        
        self.ax_presion_flujo.set_ylabel('Flujo [ml/s]')
        self.ax_presion_flujo.set_xlabel('Presion [kPa]')
        self.ax_presion_flujo.set_title('Flujo sensado vs Presion sensada', **self.form_titulos)
        #self.ax_presion_flujo.grid()
        

        
       
        self.canvas_flujo_tiempo.draw()
 
       
        self.canvas_presion_tiempo.draw()
        #self.canvas_presion_tiempo.get_tk_widget().grid(column=0, row=2)
        #self.canvas_volumen_ventilado_tiempo = FigureCanvasTkAgg(self.volumen_ventilado_tiempo, master=self)  # A tk.DrawingArea.
        self.canvas_volumen_ventilado_tiempo.draw()
        #self.canvas_volumen_ventilado_tiempo.get_tk_widget().grid(column=1, row=1)
        #self.canvas_volumen_integrado_y_presion_tiempo = FigureCanvasTkAgg(self.volumen_integrado_y_presion_tiempo, master=self)  # A tk.DrawingArea.
        self.canvas_volumen_integrado_y_presion_tiempo.draw()
        #self.canvas_volumen_integrado_y_presion_tiempo.get_tk_widget().grid(column=1, row=2)
        #self.canvas_presion_volumen = FigureCanvasTkAgg(self.presion_volumen, master=self)  # A tk.DrawingArea.
        self.canvas_presion_volumen.draw()
        #self.canvas_presion_volumen.get_tk_widget().grid(column=2, row=1)
        #self.canvas_presion_flujo = FigureCanvasTkAgg(self.presion_flujo, master=self)  # A tk.DrawingArea.
        self.canvas_presion_flujo.draw()
        #self.canvas_presion_flujo.get_tk_widget().grid(column=2, row=2)

        
        #self.toolbar_canvas_flujo_tiempo = NavigationToolbar2Tk(self.canvas_flujo_tiempo,self.body)
        self.toolbar_canvas_flujo_tiempo.update()
        #self.toolbar_presion_tiempo = NavigationToolbar2Tk(self.canvas_presion_tiempo,self.body)
        self.toolbar_presion_tiempo.update()
        #self.toolbar_volumen_ventilado_tiempo = NavigationToolbar2Tk(self.canvas_volumen_ventilado_tiempo,self.body)
        self.toolbar_volumen_ventilado_tiempo.update()
        #self.toolbar_volumen_integrado_y_presion_tiempo = NavigationToolbar2Tk(self.canvas_volumen_integrado_y_presion_tiempo,self.body)
        self.toolbar_volumen_integrado_y_presion_tiempo.update()
        #self.toolbar_presion_volumen = NavigationToolbar2Tk(self.canvas_presion_volumen,self.body)
        self.toolbar_presion_volumen.update()
        #self.toolbar_presion_flujo = NavigationToolbar2Tk(self.canvas_presion_flujo,self.body)
        self.toolbar_presion_flujo.update()

        #self.body.grid(column=1, row=1, sticky=tk.NSEW)         
         
    def _leer(self):
        
        #try:
            #self.body.destroy()
        #except:
        #    pass
        self.path = tk.filedialog.askdirectory(title = "Select A File")
        with open(self.path +'/Set.txt' ) as self.file:
            self.rows = csv.reader(self.file,delimiter=',')
            self.Set={}
            for self.row in self.rows:
                if not self.row:    # Saltea filas sin datos
                    continue
                self.row = [func(val) for func, val in zip([str,str], self.row) ]
                self.Set[self.row[0]]=self.row[1]
            self.file.close()
        with open(self.path + '/Data.txt', 'r') as self.file:
            self.rows = csv.reader(self.file,delimiter=',')
            self.column = 0
            self.gData=[[],[],[] ,[], [], []]
            for self.row in self.rows:
                self.aux = self.row
                for self.aux in self.row:
                    for i in self.aux.replace('[','').replace(']','').split(","):
                        self.gData[self.column].append(float(i))
                    self.column = self.column+1
            self.file.close()
            self.create_body_plot()

    def _agregar(self):
        
        #try:
            #self.body.destroy()
        #except:
        #    pass
        self.path = tk.filedialog.askdirectory(title = "Select A File")
        with open(self.path +'/Set.txt' ) as self.file:
            self.rows = csv.reader(self.file,delimiter=',')
            self.Set={}
            for self.row in self.rows:
                if not self.row:    # Saltea filas sin datos
                    continue
                self.row = [func(val) for func, val in zip([str,str], self.row) ]
                self.Set[self.row[0]]=self.row[1]
            self.file.close()
        with open(self.path + '/Data.txt', 'r') as self.file:
            self.rows = csv.reader(self.file,delimiter=',')
            self.column = 0
            self.gData=[[],[],[] ,[], [], []]
            for self.row in self.rows:
                self.aux = self.row
                for self.aux in self.row:
                    for i in self.aux.replace('[','').replace(']','').split(","):
                        self.gData[self.column].append(float(i))
                    self.column = self.column+1
            self.file.close()
            self.agregar_plot()            
        
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
        self.fig_resistencia_compliance_sen.savefig(self.path+'/resistencia_compliance_sen.jpg')
    
    


    

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
          

    def _quit(self):

        self.quit()     # stops mainloop
        self.destroy()  # this is necessary on Windows to prevent
                            # Fatal Python Error: PyEval_RestoreThread: NULL tstate
                 



App = Entorno()
App.mainloop()

