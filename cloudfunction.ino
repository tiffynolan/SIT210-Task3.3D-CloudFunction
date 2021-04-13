int led = D7; 

void setup() 
{
  pinMode(led, OUTPUT);
  
  Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", dataHandler);
}

void loop() 
{

}

void dataHandler(const char *event, const char *data)
{
    //Blink 3 times
    if(strcmp(data, "wave") == 0)
    {
        // To blink the LED, first we'll turn it on...
        digitalWrite(led, HIGH);
        
        // We'll leave it on for 1 second...
        delay(1000);
        
        // Then we'll turn it off...
        digitalWrite(led, LOW);
        
        // Wait 1 second...
        delay(1000);
        
        // To blink the LED, first we'll turn it on...
        digitalWrite(led, HIGH);
        
        // We'll leave it on for 1 second...
        delay(1000);
        
        // Then we'll turn it off...
        digitalWrite(led, LOW);
        
        // We'll leave it on for 1 second...
        delay(1000);
        
        // To blink the LED, first we'll turn it on...
        digitalWrite(led, HIGH);
        
        // We'll leave it on for 1 second...
        delay(1000);
        
        // Then we'll turn it off...
        digitalWrite(led, LOW);
        
        // We'll leave it on for 1 second...
        delay(1000);
        
    }
    //Blink once
    else if(strcmp(data, "pat") == 0)
    {
        // To blink the LED, first we'll turn it on...
        digitalWrite(led, HIGH);
        
        // We'll leave it on for 1 second...
        delay(1000);
        
        // Then we'll turn it off...
        digitalWrite(led, LOW);
        
        // We'll leave it on for 1 second...
        delay(1000);
    }
}

