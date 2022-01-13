int ledPin=13; //Assigns digital pin number to a variable

void setup()
{
  //Serial.begin(9600); //Turn on serial communication for debugging purposes
  pinMode(ledPin, OUTPUT); //Defines the digital pin 13 as an output pin
}

//Defining of a blinking function that has two blinking rates with two different number of blinks

void blink(int quicker_interval,int slower_interval,int quicker_blinks,int slower_blinks){
  for (int i=0;i<quicker_blinks;i++){  // "quicker_blinks" gives the number of fast blinks
    digitalWrite(ledPin,HIGH);
    delay(quicker_interval);    //"quicker_interval" gives the time interval(in milli seconds) for on or off state of the fast blinks
    digitalWrite(ledPin,LOW);
    delay(quicker_interval);
  }
  for (int j=0;j<slower_blinks;j++){ // "slower_blinks" gives the number of slow blinks
    digitalWrite(ledPin,HIGH);
    delay(slower_interval); //"slower_interval" gives the time interval(in milli seconds) for on or off state of the slow blinks
    digitalWrite(ledPin,LOW);
    delay(slower_interval); 
  } 
}   
  
 

void loop()
{
  //int time_1=millis();
  blink(500,2000,5,5); //calls blink function
  //int time_2=millis();
  //Serial.println(time_2-time_1); //print time consumed by one loop
}


