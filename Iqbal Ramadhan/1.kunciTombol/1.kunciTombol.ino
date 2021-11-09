//variable button
int button1 = 2;
int button2 = 3;
//int button3 = 4;

//variable LED
int R = 6;
int Y = 5;
int G = 7;

//addon variable
int key1 = 1;
int key2 = 0;
int key3 = 0;

void setup() {
  // setup port COM
  Serial.begin(9600);

  //setup pin mode (output/input)
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
//  pinMode(button3,INPUT);
  
  pinMode(R,OUTPUT);
  pinMode(Y,OUTPUT);
  pinMode(G,OUTPUT);
  
  Serial.println("System Start");
  Serial.println("Palang ditutup");

  
  
}

void loop() {
  
  //read button condition
  int readButton1 = digitalRead(button1);
  int readButton2 = digitalRead(button2);
//  int readButton3 = digitalRead(button3);

//  //print Serial
//  Serial.print("Kondisi button 1 : "); Serial.print(readButton1); Serial.print(" | Kondisi Key : "); Serial.println(key1);
////  Serial.print("Kondisi button 2 : "); Serial.print(readButton2); Serial.print(" | Kondisi Key : "); Serial.println(key2);
////  Serial.print("Kondisi button 3 : "); Serial.print(readButton3); Serial.print(" | Kondisi Key : "); Serial.println(key3);
//  Serial.println();

  //logic
if(readButton1 == 0 && readButton2 == 1){
    digitalWrite(R,HIGH);

}
 

  //start of button 1
  if(readButton2 == 1 && key1 == 1){
    delay(500);
    digitalWrite(R,LOW);

    digitalWrite(G,HIGH);
    Serial.println("palang dibuka, silahkan ambil tiket");
    key1 = 0;
    
  }else if(readButton1 == 0 && key1 == 0){
    delay(500);
    digitalWrite(R,HIGH);

    digitalWrite(G,LOW);
    Serial.println("palang ditutup");
    key1 = 1;
  }
  //end of button 1

//  //start of button 2
//  if(readButton2 == 1 && key2 == 0){
//    delay(1000);
//    digitalWrite(Y,HIGH);
//    key2 = 1;
//  }else if(readButton2 == 1 && key2 == 1){
//    delay(1000);
//    digitalWrite(Y,LOW);
//    key2 = 0;
//  }
//  //end of button 2
//
//  //start of button 3
//  if(readButton3 == 1 && key3 == 0){
//    delay(1000);
//    digitalWrite(G,HIGH);
//    key3 = 1;
//  }else if(readButton3 == 1 && key3 == 1){
//    delay(1000);
//    digitalWrite(G,LOW);
//    key3 = 0;
//  }
//  //end of button 3

}
