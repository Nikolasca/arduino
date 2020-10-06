/* Níkolas Cardona Pizarro - Código para termostato (mux displays) Versión 1.0 25/09/2019 12:43 AM*/

int a = 9;
int b = 10;
int c = 5;
int d = 4;
int e = 3;
int f = 8;
int g = 7;
boolean change = false;
int unidad = 0;
int decena = 0;
int temp = 0;

unsigned long t0_display2 = 0;
unsigned long t0_display_previous2 = 0;
void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

}

void loop() {
  

  unsigned long t0_display = 0;
  unsigned long t0_display_previous = 0;

  t0_display = millis();
  
  if ((t0_display - t0_display_previous) >= 40) {
    if (!change) { //prende el display de unidades y apaga decenas
      segments(unidad);
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      change = true;
    } else {//prende el display de decenas y apaga el de unidades
      segments(decena);
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      change = false;
    }
    DelayMed();
  }
  t0_display_previous = millis();


}

void segments(int number) {
  if (number == 0) { //numero 0
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
  } else if (number == 1) { //numero 1
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  } else if (number == 2) { //numero 2
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
  } else if (number == 3) { //numero 3
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
  } else if (number == 4) { //numero 4
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  } else if (number == 5) { //numero 5
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  } else if (number == 6) { //numero 6
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  } else if (number == 7) { //numero 7
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  } else if (number == 8) { //numero 8
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  } else if (number == 9) { //numero 9
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  }
}
void DelayMed (){
  Serial.println(" ");
    t0_display2 = millis();
  if ((t0_display2 - t0_display_previous2) >= 500) {


    temp = (analogRead(A5) * 500) / 1024;
    Serial.println(temp);
    unidad = temp % 10;
    decena = temp / 10;

    t0_display_previous2 = millis();
  }
  
  
  }
