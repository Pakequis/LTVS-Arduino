/*
  TV Light simulator - 19/02/2022
  By Rodrigo Feliciano
  https://www.pakequis.com.br

*/
#include <SoftPWM.h> 

#define RED_PIN     8
#define GREEN_PIN   9
#define BLUE_PIN    10

int redr = 0;
int bluer = 0;
int greenr = 0;
int timer = 0;

void setup() 
{

  SoftPWMBegin();
  
  SoftPWMSet(RED_PIN, 0);
  SoftPWMSetFadeTime(RED_PIN, 50, 50);
  SoftPWMSet(GREEN_PIN, 0);
  SoftPWMSetFadeTime(GREEN_PIN, 50, 50);
  SoftPWMSet(BLUE_PIN, 0);
  SoftPWMSetFadeTime(BLUE_PIN, 50, 50);

  randomSeed(analogRead(0));
}

void loop() 
{

  //Red random light
  redr = random(0, 255);
  SoftPWMSet(RED_PIN, redr);

  //Blue random light
  bluer = random(0, 255);
  SoftPWMSet(BLUE_PIN, bluer);

  //Green random light
  greenr = random(0, 255);
  SoftPWMSet(GREEN_PIN, greenr);    

  timer = random(100, 500);
  delay(timer);
}
