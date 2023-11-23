const int numLEDs = 6;
const int leds[numLEDs] = {2, 3, 4, 5, 6, 7}; 
const int sliderPin = A0; 


int sliderValue = 0;
boolean func1Active = false;

void setup() {
 
  for (int i = 0; i < numLEDs; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  
  sliderValue = analogRead(sliderPin);
  
  
  if (sliderValue > 500) {   
    func1Active = false;
    
    for (int i = 0; i < numLEDs; i++) {
      if (i % 2 == 0) {
        digitalWrite(leds[i], LOW); 
      } else {
        digitalWrite(leds[i], HIGH); 
      }
    }
    
    delay(1000); 
    
    for (int i = 0; i < numLEDs; i++) {
      if (i % 2 == 0) {
        digitalWrite(leds[i], HIGH); 
      } else {
        digitalWrite(leds[i], LOW); 
      }
    }
    
    delay(1000); 

  } else {
    
    func1Active = true;
    
    for (int i = 0; i < numLEDs; i++) {
      digitalWrite(leds[i], HIGH); 
    }
    
    delay(1000); 
    
    for (int i = 0; i < numLEDs; i++) {
      digitalWrite(leds[i], LOW); 
    }
    
    delay(1000); 
  }
}
