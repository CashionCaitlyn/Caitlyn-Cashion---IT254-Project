
int pirPin = 2;    
int ledPin = 8;    
int Buzzer = 6;    


void setup(){
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  digitalWrite(pirPin, LOW);
  Serial.begin(9600);

  }


void loop(){
     
if(digitalRead(pirPin) == HIGH){
  digitalWrite(ledPin, HIGH);   
  tone(Buzzer,750);
  Serial.println("Motion Detected");
       
       }

     if(digitalRead(pirPin) == LOW){       
       digitalWrite(ledPin, LOW);  
       noTone(Buzzer);
       
  }

}
