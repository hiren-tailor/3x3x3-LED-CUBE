int ledpin; //Use for Pattern 5 
int dt=0; //Use for Pattern 1 Delay time


void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() 
{
    clearn();
    myfuntone2();
    myfunmusic(); 
    //delay(200);
    p2C();
    p1C();
   //delay(200);
    myfuntone();

}

//function

//Active & deactive Levels
//Level 1
void L1A(){
  digitalWrite(13, HIGH);
}

void L1DA(){
  digitalWrite(13, LOW);
}

//Level 2
void L2A(){
  digitalWrite(12, HIGH);
}

void L2DA(){
  digitalWrite(12, LOW);
}

//Level 3
void L3A(){
  digitalWrite(11, HIGH);
}

void L3DA(){
  digitalWrite(11, LOW);
}

//Trun off all Levels & all Led's
void clearn(){
  L1DA();
  L2DA();
  L3DA();
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10,LOW);
}


/*Pattern 1 
Runner*/

void p1(int dt){
for (int i = 2; i <=10; i++){
    digitalWrite(i, HIGH);
    delay(dt);
    digitalWrite(i, LOW);
    delay(dt);
  } 
}

/*Pattern 1 
Controller*/
void p1C(){
  L1DA();
  p1(50);
  //L1A();
 
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  delay(200);

  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  
  L2DA();
  p1(50);

  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(200);

  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);

  //L2A();
  
  L3DA();
  p1(50);

  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  delay(200);

  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
 
  //L3A();
}

void myfuntone(){
  L1DA();
  L2DA();
  L3DA();
  for (int i=1; i<6; i++)
  {
  digitalWrite(2,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(8,HIGH);
  delay(50);
  
  digitalWrite(2,LOW);
  digitalWrite(6,LOW);
  digitalWrite(10,LOW);
  digitalWrite(4,LOW);
  digitalWrite(8,LOW);
  delay(50);
  }
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(200);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
}

void myfuntone2(){
  L1DA();
  L2DA();
  L3DA();
  // first
  for (int i=1; i<6; i++)
  {
  digitalWrite(6,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  delay(100);
  
  digitalWrite(6,LOW);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  delay(100);
  }
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  delay(500);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);

  //second
    for (int i=1; i<6; i++)
  {
  digitalWrite(3,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  delay(100);
  
  digitalWrite(3,LOW);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  delay(100);
  }
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(500);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);

    //third
    for (int i=1; i<6; i++)
  {
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
  delay(100);
  
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  digitalWrite(7,LOW);
  delay(100);
  }
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);

    // 4th
  for (int i=1; i<6; i++)
  {
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(9,HIGH);
  delay(100);
  
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  digitalWrite(7,LOW);
  digitalWrite(9,LOW);
  delay(100);
  }
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  delay(500);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  
  //5th
    for (int i=1; i<6; i++)
  {
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  delay(100);
  
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  delay(100);
  }
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(500);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);

   //6th
    for (int i=1; i<6; i++)
  {
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
  delay(100);
  
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  digitalWrite(6,LOW);
  delay(100);
  }
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);

   //7th
    for (int i=1; i<6; i++)
  {
  digitalWrite(2,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(10,HIGH);
  delay(100);
  
  digitalWrite(2,LOW);
  digitalWrite(6,LOW);
  digitalWrite(10,LOW);
  delay(100);
  }
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);

   //8th
    for (int i=1; i<6; i++)
  {
  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(8,HIGH);
  delay(100);
  
  digitalWrite(4,LOW);
  digitalWrite(6,LOW);
  digitalWrite(8,LOW);
  delay(100);
  }
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(500);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  
}

/*Pattern 2 
Runner */

void p2(){
  int dt2=50;
  digitalWrite(6, HIGH);
  delay(dt2);
  digitalWrite(6, LOW);
  delay(dt2);
  digitalWrite(7, HIGH);
  delay(dt2);
  digitalWrite(7, LOW);
  delay(dt2);
  digitalWrite(10, HIGH);
  delay(dt2);
  digitalWrite(10, LOW);
  delay(dt2);
  digitalWrite(9, HIGH);
  delay(dt2);
  digitalWrite(9, LOW);
  delay(dt2);
   digitalWrite(8, HIGH);
  delay(dt2);
  digitalWrite(8, LOW);
  delay(dt2);
  digitalWrite(5, HIGH);
  delay(dt2);
  digitalWrite(5, LOW);
  delay(dt2);
  digitalWrite(2, HIGH);
  delay(dt2);
  digitalWrite(2, LOW);
  delay(dt2);
  digitalWrite(3, HIGH);
  delay(dt2);
  digitalWrite(3, LOW);
  delay(dt2);
  digitalWrite(4, HIGH);
  delay(dt2);
  digitalWrite(4, LOW);
  delay(dt2);
}

/*Pattern 2 
Controller*/
void p2C(){
  
  L1DA();
  p2();
  L1A();
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  
  L2DA();
  p2();
  L2A();
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(500);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  
  L3DA();
  p2();
  L3A();
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  delay(500);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  
}

void myfunmusic(){
  L1DA();
  L2DA();
  L3DA();
  digitalWrite(2,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(10,HIGH);
  delay(100);

  digitalWrite(2,LOW);
  digitalWrite(7,LOW);
  digitalWrite(10,LOW);
  delay(100);

  digitalWrite(3,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  delay(100);

  digitalWrite(3,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  delay(100);
  
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(8,HIGH);
  delay(100);

  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(8,LOW);
  delay(100);

  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);

  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(8,HIGH);
  delay(100);

  digitalWrite(4,LOW);
  digitalWrite(6,LOW);
  digitalWrite(8,LOW);
  delay(100);

  digitalWrite(3,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  delay(100);

  digitalWrite(3,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  delay(100);
  
  digitalWrite(2,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(10,HIGH);
  delay(100);

  digitalWrite(2,LOW);
  digitalWrite(6,LOW);
  digitalWrite(10,LOW);
  delay(100);

  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(500);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);

}
