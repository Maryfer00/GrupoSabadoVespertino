void setup() {
 Serial.begin(9600);
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);
 
}

void loop() {
  //encender numero 0
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(10,HIGH);

 delay(500);

 //encender numero 1
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);

 delay(500);

 //encender numero 2
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(8,LOW);
 digitalWrite(9,HIGH);
 digitalWrite(10,HIGH);

 delay(500);

 //encender numero 3
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(10,LOW);

 delay(500);

 //encender numero 4
 digitalWrite(3,HIGH);
 digitalWrite(4,HIGH);
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);

 delay(500);

 //encender numero 5
 digitalWrite(3,HIGH);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(8,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(10,LOW);

 delay(500);

 //encender numero 6
 digitalWrite(3,HIGH);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(8,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(10,HIGH);

 delay(500);

 //encender numero 7
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);

 delay(500);

 //encender numero 8
 digitalWrite(3,HIGH);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(10,HIGH);

 delay(500);

 //encender numero 9
 digitalWrite(3,HIGH);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 
 delay(500);
}
