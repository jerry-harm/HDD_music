#include<Arduino.h>
#include<random>

#define BEAT1 500


void play(float music[][2],int size){
int p=8;
for (int i=0;i<size;i++)
  {
    // rand()%2?p=8:p=9;
    tone(p, music[i][0]);
    delay(music[i][1]*BEAT1);
  
  for(int j=0;j<10;j++){
  if(rand()%10>5){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  }else{
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);   
  }
  delay(3);
  }
  
  }
  noTone(p);
  delay(5);
  

}