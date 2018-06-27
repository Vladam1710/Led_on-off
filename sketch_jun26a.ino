String temp;

void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
  Serial.begin(57600);
    while (!Serial) {}
  digitalWrite(LED_BUILTIN,LOW);  
}

void loop() { 
  
    if(Serial.available()>0)
    {
       temp = Serial.readString();
       Serial.print("I receivedasd: ");
       Serial.println(temp);
        if(temp=="on")
       {
        digitalWrite(LED_BUILTIN,HIGH);
        } 
       else
       {
        if(temp=="off")
        {
        digitalWrite(LED_BUILTIN,LOW);
        }
       }

    }





 
  }

