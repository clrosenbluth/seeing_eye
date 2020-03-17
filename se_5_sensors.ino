int ultraRo=2; //right belt
int ultraRi=3; 

int ultraRMo=4; //right middle belt
int ultraRMi=5;

int ultraMo=6; //middle belt
int ultraMi=7;

int ultraLMo=8; //left middle belt
int ultraLMi=9; 

int ultraLo=10;  //left belt
int ultraLi=11;

int Rclose = 0;
int MRclose = 0;
int Mclose = 0;
int MLclose = 0;
int Lclose = 0;

long duration1,inches1,duration2,inches2,duration3,inches3, duration4, inches4, duration5, inches5;

void setup() 
{  
Serial.begin(9600); 
pinMode(ultraRo, OUTPUT); //initialize ultrasonic outputs
pinMode(ultraRMo, OUTPUT);
pinMode(ultraMo, OUTPUT);
pinMode(ultraLMo, OUTPUT);
pinMode(ultraLo, OUTPUT);

pinMode(ultraRi, INPUT);  //initialize 
pinMode(ultraRMi, INPUT);
pinMode(ultraMi, INPUT);
pinMode(ultraLMi, INPUT);
pinMode(ultraLi, INPUT);
}

void loop() {
ultraR();

ultraRM();

ultraM();

ultraLM();

ultraL();
delay(500);
}

void ultraR(){
digitalWrite(ultraRo, LOW);        
delayMicroseconds(2);  
digitalWrite(ultraRo, HIGH);  
delayMicroseconds(5);  
digitalWrite(ultraRo, LOW);
  
duration1 = pulseIn(ultraRi, HIGH);  
inches1 = duration1 / 74 / 2;   
if(inches1 <= 5) {
Rclose = 1;
Serial.println("Right is close.");
}
}

void ultraRM(){
digitalWrite(ultraRMo, LOW);        
delayMicroseconds(2);  
digitalWrite(ultraRMo, HIGH);  
delayMicroseconds(5);  
digitalWrite(ultraRMo, LOW);
  
duration2 = pulseIn(ultraRMi, HIGH);  
inches2 = duration2 / 74 / 2;   
if(inches2 <= 5) {
MRclose = 1;
Serial.println("Mid-right is close.");
}
}

void ultraM(){
digitalWrite(ultraMo, LOW);        
delayMicroseconds(2);  
digitalWrite(ultraMo, HIGH);  
delayMicroseconds(5);  
digitalWrite(ultraMo, LOW);
  
duration3 = pulseIn(ultraMi, HIGH);  
inches3 = duration3 / 74 / 2;   
if(inches3 <= 5) {
Rclose = 1;
Serial.println("Middle is close.");
}
}

void ultraLM(){
digitalWrite(ultraLMo, LOW);        
delayMicroseconds(2);  
digitalWrite(ultraLMo, HIGH);  
delayMicroseconds(5);  
digitalWrite(ultraLMo, LOW);
  
duration4 = pulseIn(ultraLMi, HIGH);  
inches4 = duration4 / 74 / 2;   
if(inches4 <= 5) {
MLclose = 1;
Serial.println("Mid-left is close.");
}
}

void ultraL(){
digitalWrite(ultraLo, LOW);        
delayMicroseconds(2);  
digitalWrite(ultraLo, HIGH);  
delayMicroseconds(5);  
digitalWrite(ultraLo, LOW);
  
duration5 = pulseIn(ultraLi, HIGH);  
inches5 = duration5 / 74 / 2;   
if(inches5 <= 5) {
Mclose = 1;
Serial.println("Left is close.");
}
}


