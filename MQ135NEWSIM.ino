//ID OF USER: Rakeshtsg
//INTERFACE: Arduino 
//APPLICATION:The MQ135 gas sensor has high sensitivity in ammonia, sulfide, benzene steam, smoke, and other harm full gas. It is low cost and suitable for different applications.
void setup()
{
pinMode(A1,INPUT);
Serial.begin(9600);
}
void loop()
{
int sv=analogRead(A1);
Serial.print("AQI=");
Serial.print(sv);
Serial.print("ppm");
Serial.println(" ");
}
