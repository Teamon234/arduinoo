#define BLYNK_TEMPLATE_ID "TMPLWhBrHvx5"
#define BLYNK_DEVICE_NAME "Quickstart Template"
#define BLYNK_AUTH_TOKEN "lLFhu2YOiduw7VPpGll1sui2AT2JKdPd"
// Template ID, Device Name and Auth Token are provided by the Blynk.Cloud
// See the Device Info tab, or Template settings
//#define BLYNK_TEMPLATE_ID           "TMPLlVYrlAl9"
//#define BLYNK_DEVICE_NAME           "Quickstart Device"
//#define BLYNK_AUTH_TOKEN            "Mg6Mne_iLT2jkquxwCgV6iVqMVv4qCAk"


// Comment this out to disable prints and save space
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

int ledPin = D1;
int gndPin = D2;

char auth[] = BLYNK_AUTH_TOKEN;

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "iPhone von Timon";
char pass[] = "felix123";

BlynkTimer timer;

void setup()
{
  // Debug console
  Serial.begin(115200);

  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);

  // Setup a function to be called every second
  timer.setInterval(1000L, myTimerEvent);
  pinMode(ledPin, OUTPUT);
  pinMode(gndPin, OUTPUT);
} 

void loop()
{
  Blynk.run();
  timer.run();
  // You can inject your own code or combine it with other sketches.
  // Check other examples on how to communicate with Blynk. Remember
  // to avoid delay() function!
  }

// This function is called every time the Virtual Pin 0 state changes
BLYNK_WRITE(V0)
{
  // Set incoming value from pin V0 to a variable
  int value = param.asInt();

  // Update state
  Blynk.virtualWrite(V1, value);
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin,LOW);
  delay(1000);
}

// This function is called every time the device is connected to the Blynk.Cloud
BLYNK_CONNECTED()
{
  Blynk.syncVirtual(V0);  // will cause BLYNK_WRITE(V0) to be executed

  // Change Web Link Button message to "Congratulations!

}

// This function sends Arduino's uptime every second to Virtual Pin 2.
void myTimerEvent()
{
  // You can send any value at any time.
  // Please don't send more that 10 values per second.
  Blynk.virtualWrite(V2, millis() / 1000);
}


void setup()
{
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
}

BLYNK_WEITE(V0)
{
  if(param.asInt() ==1)
  {
    digitalWrite(D1,HIGH);
    digitalWrite(D2,LOW);
    {
    else
    {
      digitalWrite(D1,LOW);
      digitalWrite(D2,LOW);  
  }
}
BLYNK_WRITE(V5)
{
  if(param.asInt() ==1)
  {
    digitalWrite(D1,HIGH);
    digitalWrite(D2,LOW);
    Blynk.virtualWrite(V1,1);
    Blynk.virtualWrite(V2,1);
    Blynk.virtualWrite(V3,1);
    Blynk.virtualWrite(V4,1);
    {
    else
    {
      digitalWrite(D1,LOW);
      digitalWrite(D2,LOW);

{
  // You can send any value at any time.
  // Please don't send more that 10 values per second.
  Blynk.virtualWrite
