/* Taller 1 Arduino - V 1.0 - Leds en diferentes secuencias - 18/09/2019 Níkolas Cardona Pizarro */

void setup() {
  pinMode(2, INPUT); //pulsador 3
  pinMode(3, INPUT); //pulsador 2
  pinMode(4, INPUT); //pulsador 1
  
  pinMode(5, OUTPUT); //Rojo1
  pinMode(6, OUTPUT); //Verde1
  pinMode(7, OUTPUT); //Amarillo1 
  pinMode(8, OUTPUT); //Rojo2
  pinMode(9, OUTPUT); //Verde2
  pinMode(10, OUTPUT); //Amarillo2 
  pinMode(11, OUTPUT); //Rojo3
  pinMode(12, OUTPUT);  //Verde3
  pinMode(13, OUTPUT); //Amarillo3 
  
  Serial.begin(9600);
}

void loop() {
  
 int pulsador1 = 0;
 int pulsador2 = 0;
 int pulsador3 = 0;
 
 pulsador1 = digitalRead(4);
 pulsador2 = digitalRead(3);
 pulsador3 = digitalRead(2);
 
 Serial.print(pulsador1);
 Serial.print(pulsador2);
 Serial.print(pulsador3);
 

 if(pulsador1==1&&pulsador3==1){
         CarroCool();
          delay(500);
          digitalWrite(5, LOW);
          digitalWrite(6, LOW);
          digitalWrite(7, LOW);
        
        }

        else{
          }
 
 if(pulsador1 == 1&&pulsador3==0){
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(5, LOW);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(8, LOW);
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(10, LOW);
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(1000);
  digitalWrite(13, LOW);
  
  }
  else {
    
  }
  if(pulsador2==1){
    prender2(5,7);
    prender2(6,8);
    prender2(7,9);
    prender2(8,10);
    prender2(9,11);
    prender2(10,12);
    prender2(11,13);
    
    }
    else{
      }

    if(pulsador3==1&&pulsador1==0){
      prenderSecuenciaRA();
      prenderSecuenciaVA();
      prenderSecuenciaRV();
      }
    else{
      }

      

}
 void prender2(int puerto,int puerto2){
  digitalWrite(puerto, HIGH);
  digitalWrite(puerto2, HIGH);
  delay(1000);
  digitalWrite(puerto, LOW);
  digitalWrite(puerto2, LOW);
  }

  void prenderSecuenciaRA(){
    int myPinsRA[] = {5, 7, 8, 10, 11,13};

  digitalWrite(5, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(5, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(13, LOW);
  delay(1000);
  
    }

    void prenderSecuenciaVA(){
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
   delay(1000);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
   delay(2000);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  
    }

     void prenderSecuenciaRV(){
      for(int i =0;i<3;i++){
   delay(1500);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  delay(1500);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  delay(1500);
        
        }
      
      }

      void CarroCool(){
        for(int i =0;i<1;i++){
          digitalWrite(5, HIGH);
          digitalWrite(6, HIGH);
          digitalWrite(7, HIGH);
          delay(500);
          digitalWrite(5, LOW);
          digitalWrite(6, HIGH);
          digitalWrite(8, HIGH);
          delay(500);
          digitalWrite(6, LOW);
          digitalWrite(7, HIGH);
          digitalWrite(9, HIGH);
          delay(500);
          digitalWrite(7, LOW);
          digitalWrite(8, HIGH);
          digitalWrite(10, HIGH);
           delay(500);
          digitalWrite(8, LOW);
          digitalWrite(9, HIGH);
          digitalWrite(11, HIGH);
          delay(500);
          digitalWrite(9, LOW);
          digitalWrite(10, HIGH);
          digitalWrite(12, HIGH);
          delay(500);
          digitalWrite(10, LOW);
          digitalWrite(11, HIGH);
          digitalWrite(13, HIGH);
           delay(500);
           digitalWrite(11, HIGH);
           digitalWrite(12, HIGH);
           digitalWrite(10, HIGH);
           digitalWrite(13, LOW);
            delay(500);
           digitalWrite(12, LOW);
          digitalWrite(11, HIGH);
          digitalWrite(9, HIGH);
           delay(500);
           digitalWrite(11, LOW);
          digitalWrite(10, HIGH);
          digitalWrite(8, HIGH);
          delay(500);
           digitalWrite(10, LOW);
          digitalWrite(9, HIGH);
          digitalWrite(7, HIGH);
           delay(500);
           digitalWrite(9, LOW);
          digitalWrite(8, HIGH);
          digitalWrite(6, HIGH);
          delay(500);
           digitalWrite(8, LOW);
          digitalWrite(7, HIGH);
          digitalWrite(5, HIGH);
         
            
          
           
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
          }
        }

      

    
