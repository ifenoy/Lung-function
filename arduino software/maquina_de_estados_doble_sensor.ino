#include <Wire.h>

class SFM3000CORE {
  public:
    //SFM3000CORE(uint8_t i2cAddress);
  SFM3000CORE(int i2cAddress);
    void init();
    int getvalue();

  private:
  //uint8_t mI2cAddress;
  int mI2cAddress;
  uint8_t crc8(const uint8_t data, uint8_t crc);
};

//variables globales
const int dirPin = 3;
const int stepPin = 4;
const int sleepPin = 5;
const int enablePin = 7;
const int resetPin = 6;

const int sensorPresionPositiva = A0;

#define offsetPresionPositiva 34.5 
#define proporcionalPresionPositiva 92.2 

const int sensorPresionNegativa = A1;

#define offsetPresionNegativa 38.5 
#define proporcionalPresionNegativa 91.9

long executing_time_us = 0; //
long executing_steps_time_us = 0; //
long executing_muestreo_time_us = 0; //

int StepsActual=0;
int StepsInspiracion=0;
int StepsEspiracion=0;

float Volumen=0;
unsigned long TiempoInicial=0;
long TiempoDelta=0;


int NumeroCiclo = 1;
int CantidadCiclos = 0;

unsigned long previousMicro=0;
unsigned long currentMicros=0;

unsigned long Ts_Inspiracion=0;
unsigned long Ts_Espiracion=0;

unsigned long Ts_Muestreo=5000;

int esperaFinCiclo = 0;


float presionMax = 0;

boolean stepsState=LOW;

boolean imprimirEstados = LOW;

SFM3000CORE senseFlow(64);

void enviar(float flujo,float presionNegativa,float presionPositiva,float steps)
{
  Serial.print(String(flujo)+",");  

  Serial.print(String(presionNegativa)+"," );
 
  Serial.print(String(presionPositiva)+"," );

  Serial.println(String(steps));  
}


void dar_paso(int dir)
{
  stepsState = !stepsState;
  digitalWrite(dirPin, dir);
  digitalWrite(stepPin, stepsState);
}

enum State
{
  Inicio,
  Inspiracion,
  Espiracion,
  FinCiclo,
  Espera,
  NuevosParametros
};

State EstadoActual=Inicio;

void estadoInicio()
{
  if (imprimirEstados)
  {Serial.println("estadoInicio");}
  EstadoActual=Espera;
}

void estadoEspera()
{

  if(Serial.available())
   {EstadoActual=NuevosParametros;
   if (imprimirEstados)
  {
   Serial.println("NuevosParametros"); } }
}

void estadoInspiracion()
{

  float auxPresionPositiva = 0;

  if ((currentMicros - executing_muestreo_time_us) >= Ts_Muestreo)
  {
    executing_muestreo_time_us = currentMicros;
    float auxFlujo=float(senseFlow.getvalue())/50.0;
    float auxPresionNegativa = (float(analogRead(sensorPresionNegativa))- offsetPresionNegativa)/proporcionalPresionNegativa ;
    auxPresionPositiva =  (float(analogRead(sensorPresionPositiva))- offsetPresionPositiva)/proporcionalPresionPositiva ;
    float auxVolumen = 0;
    if (StepsActual>50)
    {
       auxVolumen = float(StepsActual-50)/135.0;
    }
    enviar(auxFlujo,auxPresionNegativa,auxPresionPositiva,auxVolumen); //envio sensores y pasos al python
  }
  
  if ((currentMicros - executing_steps_time_us) >= Ts_Inspiracion) //tiempo entre pasos de inspiracion
    {
      
      executing_steps_time_us = currentMicros;
     //Ts_Inspiracion = Ts_Inspiracion + 2;
     StepsActual++;
     dar_paso(LOW); //doy un paso
    }
  
  if(StepsActual>=StepsInspiracion)  //termina la inspiracion arranca la espiracion
    {
      if (imprimirEstados)
     {Serial.println("estadoEspiracion");}
      EstadoActual=Espiracion;}
  
  if(auxPresionPositiva>=presionMax)  //termina la inspiracion arranca la espiracion
    {
      if (imprimirEstados)
     {Serial.println("estadoEspiracion");}

      Ts_Inspiracion = StepsActual;
      EstadoActual=Espiracion;
      
      }
      
}

void estadoEspiracion()
{

   if ((currentMicros - executing_muestreo_time_us) >= Ts_Muestreo)
  {
    executing_muestreo_time_us = currentMicros;
    float auxFlujo=float(senseFlow.getvalue())/50.0;
    float auxPresionNegativa = (float(analogRead(sensorPresionNegativa))- offsetPresionNegativa)/proporcionalPresionNegativa ;
    float auxPresionPositiva =  (float(analogRead(sensorPresionPositiva))- offsetPresionPositiva)/proporcionalPresionPositiva ;
    float auxVolumen = float(StepsInspiracion-50)/135.0;
    if (StepsInspiracion-StepsActual>50)
    {
       auxVolumen = float(StepsActual)/135.0;
    }
    enviar(auxFlujo,auxPresionNegativa,auxPresionPositiva,auxVolumen); //envio sensores y pasos al python
  }
  
  if ((currentMicros - executing_steps_time_us) >= Ts_Espiracion) //tiempo entre pasos de inspiracion
    {
      executing_steps_time_us = currentMicros;
      //Ts_Espiracion = Ts_Espiracion + 2;
      StepsActual--;
      dar_paso(HIGH); //doy un paso
    }
  
  if(StepsActual<0) //termina la espiracion termina el ciclo
    {EstadoActual=FinCiclo;
    esperaFinCiclo = 0;}
}

void estadoFinCiclo()
{
  if (imprimirEstados)
  {
  Serial.println("Finciclo"); }

   if ((currentMicros - executing_muestreo_time_us) >= Ts_Muestreo)
  {
    executing_muestreo_time_us = currentMicros;
    float auxFlujo=float(senseFlow.getvalue())/50.0;
    float auxPresionNegativa = (float(analogRead(sensorPresionNegativa))- offsetPresionNegativa)/proporcionalPresionNegativa ;
    float auxPresionPositiva =  (float(analogRead(sensorPresionPositiva))- offsetPresionPositiva)/proporcionalPresionPositiva ;
    float auxStepsActual=0;
    enviar(auxFlujo,auxPresionNegativa,auxPresionPositiva,auxStepsActual); //envio sensores y pasos al python
  }

  if ((currentMicros - executing_steps_time_us) >= Ts_Espiracion) //tiempo entre pasos de inspiracion
    {
      executing_steps_time_us = currentMicros;
      esperaFinCiclo=esperaFinCiclo+1;
    }

  if(Serial.available())
     {EstadoActual=NuevosParametros;}
  if (esperaFinCiclo>=300)
  {

     Ts_Inspiracion = TiempoInicial;
     Ts_Espiracion = TiempoInicial;   
     if (imprimirEstados)
     {Serial.println("estadoInspiracion");}
        EstadoActual=Inspiracion;
   }
  }


void estadoNuevosParametros()
{
  String cad = Serial.readString(); 
  if (imprimirEstados)
  {
  Serial.println(cad);}
  int pos = cad.indexOf(',');
  String cad1= cad.substring(0,pos);
  cad= cad.substring(pos+1); 
  pos = cad.indexOf(',');
  String cad2= cad.substring(0,pos);
  cad= cad.substring(pos+1); 
  pos = cad.indexOf(',');
  String cad3= cad.substring(0,pos);
  cad= cad.substring(pos+1); 
  pos = cad.indexOf(',');
  String cad4= cad.substring(0,pos);
  cad= cad.substring(pos+1); 
  pos = cad.indexOf(',');
  String cad5= cad.substring(pos+1); 

  if (cad1.compareTo("Set")){}else{
      Volumen = cad2.toFloat();
      TiempoInicial = cad3.toFloat(); 
      presionMax = cad4.toFloat();
      CantidadCiclos = cad5.toFloat();
  }
  StepsInspiracion = (Volumen*135)+50;    //relacion entre volumen ml y pasos
  presionMax = presionMax;
  Ts_Inspiracion = (TiempoInicial);
  Ts_Espiracion =(TiempoInicial);

  if (imprimirEstados)
  {
  Serial.println(Volumen);
  Serial.println(StepsInspiracion);
  Serial.println(TiempoInicial);
  Serial.println(presionMax);
  Serial.println(CantidadCiclos);
  Serial.println(Ts_Inspiracion);
  Serial.println(Ts_Espiracion);
  }
  if(Volumen==0)
  {
    if (imprimirEstados)
  {Serial.println("espera");}
  digitalWrite(sleepPin,LOW);
  digitalWrite(enablePin,HIGH);
    EstadoActual=Espera;}else
  {
    if (imprimirEstados)
  {
   Serial.println("estadoInspiracion");}
   digitalWrite(sleepPin,HIGH);
  digitalWrite(enablePin,LOW);
   EstadoActual=Inspiracion;
   }
  StepsActual=0;
  NumeroCiclo = 1; 
  executing_time_us = currentMicros;
  executing_steps_time_us = currentMicros;
    
}


void setup() {
  // put your setup code here, to run once:
senseFlow.init();

pinMode(13, OUTPUT);
pinMode(dirPin, OUTPUT);
pinMode(stepPin, OUTPUT);
pinMode(sleepPin, OUTPUT);
digitalWrite(sleepPin,LOW);
pinMode(enablePin, OUTPUT);
digitalWrite(enablePin,HIGH);
pinMode(resetPin, OUTPUT);
digitalWrite(resetPin,HIGH);

Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:

  currentMicros = micros();
  
  switch (EstadoActual)
  {
    case Inicio: estadoInicio(); break;
    case Inspiracion: estadoInspiracion(); break;
    case Espiracion: estadoEspiracion(); break;
    case FinCiclo: estadoFinCiclo(); break;
    case Espera: estadoEspera(); break;
    case NuevosParametros: estadoNuevosParametros(); break;
  }

}


SFM3000CORE::SFM3000CORE(int i2cAddress)
{
  //: mI2cAddress(i2cAddress)
  mI2cAddress = i2cAddress;
}

void SFM3000CORE::init()
{
  int a = 0;
  int b = 0;
  int c = 0; 
  
 
  Wire.begin();
  //Serial.begin(9600);
  delay(1000);
  Wire.beginTransmission(byte(mI2cAddress)); // transmit to device with I2C mI2cAddress
  Wire.beginTransmission(byte(mI2cAddress)); // transmit to device with I2C mI2cAddress
  Wire.write(byte(0x10));      //
  Wire.write(byte(0x00));      //
  Wire.endTransmission();
  delay(5);
  
  Wire.requestFrom(mI2cAddress, 3); //
  a = Wire.read(); // received first byte stored here
  b = Wire.read(); // received second byte stored here
  c = Wire.read(); // received third byte stored here

  Wire.endTransmission();
  //Serial.print(a);
  //Serial.print(b);
  //Serial.println(c);
  
  delay(5);
  
  Wire.requestFrom(mI2cAddress, 3); //
  a = Wire.read(); // received  first byte stored here
  b = Wire.read(); // received second byte stored here
  c = Wire.read(); // received third byte stored here
  Wire.endTransmission();
  //Serial.print(a);
  //Serial.print(b);
  //Serial.println(c);
  
  delay(5);
  
}
 
int SFM3000CORE::getvalue()
{
    Wire.requestFrom(mI2cAddress, 3); // set read 3 bytes from device with address 0x40
  uint16_t a = Wire.read(); // received first byte stored here. The variable "uint16_t" can hold 2 bytes, this will be relevant later
  uint8_t b = Wire.read(); // second received byte stored here
  uint8_t crc = Wire.read(); // crc value stored here
  uint8_t mycrc = 0xFF; // initialize crc variable
  mycrc = crc8(a, mycrc); // let first byte through CRC calculation
  mycrc = crc8(b, mycrc); // and the second byte too
  if (mycrc != crc) { // check if the calculated and the received CRC byte matches
    //Serial.println("Error: wrong CRC");
  }
  a = (a << 8) | b; // combine the two received bytes to a 16bit integer value
  // a >>= 2; // remove the two least significant bits
  //float Flow = (float)a;
  int flow = (int(a)+ 32768);
   //int flow = (result - offset) / scale;
  return flow;
}

uint8_t SFM3000CORE::crc8(const uint8_t data, uint8_t crc)
{
     crc ^= data;
     for ( uint8_t i = 8; i; --i ) {
       crc = ( crc & 0x80 )
       ? (crc << 1) ^ 0x31
       : (crc << 1);
    }
  return crc;
}
