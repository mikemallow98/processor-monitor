
boolean contin = false;
int input = 200;
int oneSix = 2;
int twoSeven = 3;
int threeEight = 4;
int fourNine = 5;
int fiveTen = 6;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(oneSix, OUTPUT);
  pinMode(twoSeven, OUTPUT);
  pinMode(threeEight, OUTPUT);
  pinMode(fourNine, OUTPUT);
  pinMode(fiveTen, OUTPUT);
  startUp(); //plays a startup seuqence 
}

void loop() {
  // put your main code here, to run repeatedly:
  
  switch((input/10)){
    int solids [6];
    case 0: //processor usage between 0-9%
      solids[0] = oneSix;
      solid(solids, 1);
      break;
    case 1:  //usage between 10-19%
      solids[0] = oneSix;
      solids[1] = twoSeven;
      solid(solids, 2);
      break;
    case 2: //usage between 20-29%
      solids[0] = oneSix;
      solids[1] = twoSeven;
      solids[2] = threeEight;
      solid(solids, 3);
      break;
    case 3: //usage between 30-39%
      solids[0] = oneSix;
      solids[1] = twoSeven;
      solids[2] = threeEight;
      solids[3] = fourNine;
      solid(solids, 4);
      break;
    case 4: //usage between 40-49%
      solids[0] = oneSix;
      solids[1] = twoSeven;
      solids[2] = threeEight;
      solids[3] = fourNine;
      solids[4] = fiveTen;
      solid(solids, 5);
      break;
    case 5:  //usage between 50-59%
    contin = true;
    
    blnk(oneSix);
      break;
    case 6: //usage between 60-69%
    solids[0] = oneSix;
    solid(solids, 1);
    contin = true;
    blnk(twoSeven);
      break;
    case 7: //usage between 70-79%
    solids[0] = oneSix;
    solids[1] = twoSeven;
    solid(solids, 2);
    contin = true;
    blnk(threeEight);
    break;
    case 8:  //usage between 80-89%
      solids[0] = oneSix;
      solids[1] = twoSeven;
      solids[2] = threeEight;
      solid(solids, 3);
      contin = true;
      blnk(fourNine);
      break;
    case 9: //usage between 90-99%
      solids[0] = oneSix;
      solids[1] = twoSeven;
      solids[2] = threeEight;
      solids[3] = fourNine;
      solid(solids, 4);
      contin = true;
      blnk(fiveTen);
    
      break;
    case 10: //usage at 100%
     // contin = true;
      break;
    default: 
      break;
  }
    
    
}
void serialEvent(){
  
  if(Serial.available()){
    int temp = Serial.parseInt();
    if(temp > 1){
      input = temp;
      //contin = false;
      reset(); //turns off the lights between updates
    }  
  }
} 
void solid(int pin[] , int siz){
  for(int i = 0; i < siz; i++){
    digitalWrite(pin[i], HIGH);
  }
  for(int k = siz; k < 5; k++){
    digitalWrite(pin[k], LOW);
  }
}
//only one light blinks at a time, the rest are either solid or off. If processor usage is 60%, pin 3 will blink, pin 2 will be solid, all others will be off
void blnk(int pin){
  
    digitalWrite(pin, HIGH); 
    delay(500);
    digitalWrite(pin, LOW);
    delay(500);
}
//turns all lights off in between updates
void reset(){
  contin = false;
  for(int i = 2; i <8; i++){
    digitalWrite(i, LOW);
  }
}
//displays a startup light sequence when first turned on  
void startUp(){
    for(int i = 2; i <=6; i++){
      digitalWrite(i, HIGH); 
      delay(250); 
      digitalWrite(i, LOW); 
      delay(250);
    } 
    digitalWrite(2, HIGH); 
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    delay(250); 
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    
    
}



