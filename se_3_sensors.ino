int ultraFootOut=12;
int ultraFootIn=11;
int ultraWaistOut=10;
int ultraWaistIn=9;
int ultraHeadOut=8;
int ultraHeadIn=7;

long durationFoot,inchesFoot,durationWaist,inches2\Waist,durationHead,inchesHead;

void setup() 
{  
Serial.begin(9600); 
pinMode(ultraFootOut, OUTPUT);
pinMode(ultraWaistOut, OUTPUT);
pinMode(ultraHeadOut, OUTPUT);
pinMode(ultraFootIn, INPUT);
pinMode(ultraWaistIn, INPUT);
pinMode(ultraHeadIn, INPUT);
}

void loop() {
digitalWrite(ultraFootOut, LOW);        
delayMicroseconds(2);  
digitalWrite(ultraFootOut, HIGH);  
delayMicroseconds(5);  
digitalWrite(ultraFootOut, LOW);
  
durationFoot = pulseIn(ultraFootIn, HIGH);  
inchesFoot = durationFoot / 74 / 2;   
if(inchesFoot <= 5)
digitalWrite(5, HIGH); 
else
digitalWrite(5,LOW);




digitalWrite(ultraWaistOut, LOW);        
delayMicroseconds(2);  
digitalWrite(ultraWaistOut, HIGH);  
delayMicroseconds(5);  
digitalWrite(ultraWaistOut, LOW);
  
durationWaist = pulseIn(ultraWaistIn, HIGH);  
inchesWaist = durationWaist / 74 / 2;   
if(inchesWaist <= 5)
digitalWrite(4, HIGH);
else
digitalWrite(4,LOW);



  
digitalWrite(ultraHeadOut, LOW);        
delayMicroseconds(2);  
digitalWrite(ultraHeadOut, HIGH);  
delayMicroseconds(5);  
digitalWrite(ultraHeadOut, LOW);
  
durationHead = pulseIn(ultraHeadIn, HIGH);  
inchesHead = durationHead / 74 / 2;   
if(inchesHead <= 5)
digitalWrite(3, HIGH);
else
digitalWrite(3,LOW);




Serial.print("Head: ");
Serial.print(inchesHead);
Serial.print(" waist; ");
Serial.print("Middle: ");
Serial.print(inchesWaist);
Serial.print(" inches; ");
Serial.print("feet: ");
Serial.print(inchesFoot);
Serial.println(" inches");


}


