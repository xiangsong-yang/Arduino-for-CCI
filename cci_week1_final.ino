const int LED_M = 3;
const int LED_L = 5;
const int LED_R = 6;
const int Button_M = 8;
const int Button_L = 9;
const int Button_R = 10;
int ledState = HIGH;         
int buttonState; 
int buttonState2;
int lastButtonState = LOW;  
int lastButtonState2 = LOW;
int counter=0;
int counter2=0;
int state;
int value1;
int value2;


unsigned long lastDebounceTime = 0;  
unsigned long lastDebounceTime2 = 0;
unsigned long debounceDelay = 20;    
void setup() {
  pinMode(LED_M, OUTPUT);
  pinMode(LED_L, OUTPUT);
  pinMode(LED_R, OUTPUT);
  pinMode(Button_M, INPUT);
  pinMode(Button_L, INPUT);
  pinMode(Button_R, INPUT);
  

  Serial.begin(9600);

}





void standBy(){
       Serial.println("State0");
     digitalWrite(LED_M, HIGH);
     digitalWrite(LED_R, LOW);
     delay(500);
     digitalWrite(LED_L, HIGH);
     digitalWrite(LED_M, LOW);
     delay(500);
     digitalWrite(LED_R, HIGH);
     digitalWrite(LED_L, LOW);
     delay(500);
     if(digitalRead(Button_M)== HIGH){
     digitalWrite(LED_M, HIGH); 
     moveIn();
     
  
}
}
void moveIn(){
  Serial.println("State1");
     digitalWrite(LED_M, HIGH);
     digitalWrite(LED_R, HIGH);
     digitalWrite(LED_L, HIGH); 
     delay(700);     
     digitalWrite(LED_M, LOW);
     digitalWrite(LED_L, LOW);
     digitalWrite(LED_R, LOW);
     delay(700);
     digitalWrite(LED_M, HIGH);
     digitalWrite(LED_R, HIGH);
     digitalWrite(LED_L, HIGH); 
     delay(700);     
     digitalWrite(LED_M, LOW);
     digitalWrite(LED_L, LOW);
     digitalWrite(LED_R, LOW);
     delay(700);
     digitalWrite(LED_M, HIGH);
     digitalWrite(LED_R, HIGH);
     digitalWrite(LED_L, HIGH); 
     delay(700);     
     digitalWrite(LED_M, LOW);
     digitalWrite(LED_L, LOW);
     digitalWrite(LED_R, LOW);
     delay(700);
     digitalWrite(LED_M, HIGH);
     delay(200);
     digitalWrite(LED_M, LOW);
     counter = 0;
     counter2 = 0;
     state =2;
     
  
}
void game(){
   int reading = digitalRead(Button_L);
  int reading2 = digitalRead(Button_R);
  int value = 0;
  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }
  if (reading2 != lastButtonState2) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != buttonState) {
      buttonState = reading;
      if (buttonState == HIGH) {
        counter ++;
      }
    }
  }
  
if ((millis() - lastDebounceTime2) > debounceDelay) {
    if (reading2 != buttonState2) {
      buttonState2 = reading2;
      if (buttonState2 == HIGH) {
        counter2 ++;
        
      }
    }
  }


  //value1=map((counter/(counter+counter2+1))*255,0,(counter+counter2+1), 80, 255);
  //value2=map((counter2/(counter+counter2+1))*255,0,(counter+counter2+1), 80, 255);
 // digitalWrite(LED_L,value);
 // digitalWrite(LED_R,value2);
  
   Serial.print(counter);
  //Serial.print(value);
  Serial.print(" ");
  Serial.println(counter2);
 // Serial.print(" ");
  //Serial.println(value2);



  lastButtonState = reading;
  lastButtonState2 = reading2;
  
 

  if ((counter-counter2) > 5) {
    Serial.println("END");
    Serial.println("Left Win");
    counter = 0;
    counter2 = 0;
    digitalWrite(LED_M, HIGH);
    state = 3;

   
  }
    if ((counter2-counter) > 5) {
    Serial.println("END");
    Serial.println("Right Win");
    counter = 0;
    counter2 = 0;
    digitalWrite(LED_M, HIGH);
    state = 4;

   
  }
      }
  void left(){
  delay(600);
  digitalWrite(LED_L, HIGH);
  delay(600);
  digitalWrite(LED_L, LOW);
  delay(600);
  Serial.println("LEFT");
  if (digitalRead(Button_M) == HIGH){
  state = 0;
  }
}
void right(){
  delay(1000);
  digitalWrite(LED_R, HIGH);
  delay(1000);
  digitalWrite(LED_R, LOW);
  delay(1000);
  Serial.println("RIGHT");
  if (digitalRead(Button_M) == HIGH){
    state = 0;}
    }
    

void loop() {
  if(state ==0){
    standBy();}

if (state == 1 ){
  moveIn();
}
if (state ==2){
  game();
}
if (state ==3){
  left();
}
if (state ==4){
  right();
}
if ((digitalRead(Button_M) == HIGH)&&(digitalRead(Button_L))) 
{state = 0;}
  if ((state != 1)&&(digitalRead(Button_R) == HIGH)&&(digitalRead(Button_L))) 
{state = 1;}
  
  
}
