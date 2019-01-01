#include <dht.h> 
#define DHT11_PIN 8 

dht DHT;

void setup (){
Serial.begin(9600); }
void loop () {
int chk = DHT.read11(DHT11_PIN);
float hum = DHT.humidity;;
float temp= DHT.temperature;
Serial.println(temp);

if (temp < 28) { 
digitalWrite(2, LOW); digitalWrite(3, HIGH); digitalWrite(4, LOW); Serial.println("It’s Cold.");
}
else if (temp >= 28) { 
digitalWrite(2, HIGH); digitalWrite(3, LOW); digitalWrite(4, LOW); Serial.println("It’s Hot.");
}
else { 
digitalWrite(2, LOW); digitalWrite(3, LOW); digitalWrite(4, HIGH); Serial.println("It’s Fine.");
}
delay(5000); //Delay 10 seconds.
}
