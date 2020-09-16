int  buttonState = 0;
int const  buttonPress = 2;

void setup() {
  pinMode(4,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(2,INPUT);
  pinMode(3,LOW);
  
}
  

void loop() {

  buttonState =  digitalRead(buttonPress);
  if (buttonState == LOW){

    Rnd();
  }
  else if (buttonState == HIGH){

    
  }

  
}


  void Rnd(){  

    
  int hod = random(1,7);
  
  if (hod == 1){
  digitalWrite(8,1); 
  digitalWrite(4,0);
  digitalWrite(9,0);
  digitalWrite(10,0);
  digitalWrite(11,0);
  digitalWrite(12,0);
  digitalWrite(13,0);
  }
  
  else if (hod == 2){
  digitalWrite(11,1);
  digitalWrite(10,1);
  digitalWrite(4,0);
  digitalWrite(9,0);
  digitalWrite(8,0);
  digitalWrite(12,0);
  digitalWrite(13,0);
  
  }

  else if (hod == 3){
  digitalWrite(4,1);
  digitalWrite(8,1);
  digitalWrite(13,1);
  digitalWrite(9,0);
  digitalWrite(10,0);
  digitalWrite(11,0);
  digitalWrite(12,0);
  }
  
 else if (hod == 4){
  digitalWrite(4,1);
  digitalWrite(10,1);
  digitalWrite(11,1);
  digitalWrite(13,1);
  digitalWrite(9,0);
  digitalWrite(8,0);
  digitalWrite(12,0);
 }
  
 else if (hod == 5){

 digitalWrite(4,1);
  digitalWrite(10,1);
  digitalWrite(11,1);
  digitalWrite(13,1);
  digitalWrite(8,1);
  digitalWrite(9,0);
  digitalWrite(12,0);
 }
 else if (hod == 6) {
  digitalWrite(4,1);
  digitalWrite(8,0);
  digitalWrite(9,1);
  digitalWrite(10,1);
  digitalWrite(11,1);
  digitalWrite(12,1);
  digitalWrite(13,1);
 }

 
 
} 

