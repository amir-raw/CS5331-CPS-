 int button = 5; // Push Button Pin D 2  
 int led = 12;  // Led Pin D 12  
 int status = false;  
 void setup()  
      {  
      pinMode(led, OUTPUT);  
      pinMode(button, INPUT_PULLUP);   
      }  

void loop()  
      {  
      if (digitalRead(button) == true)  
      {  
      status = !status;  
      digitalWrite(13, status);  
      }   
      while(digitalRead(button) == true);  
      delay(50);  
      } 
