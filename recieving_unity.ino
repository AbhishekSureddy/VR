
int led = 12;
char myCol[20];

void setup(){
Serial.begin (9600);
pinMode(led, OUTPUT);
digitalWrite(led, LOW);
}

void loop(){
int lf = 10;
Serial.readBytesUntil(lf, myCol, 1);
if(strcmp(myCol, "r")==0){
  digitalWrite(led, LOW);  
  }
if(strcmp(myCol, "b")==0){
  digitalWrite(led, HIGH);
  }
}
