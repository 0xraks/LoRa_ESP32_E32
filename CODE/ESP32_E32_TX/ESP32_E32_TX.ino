//0xRaks GITHUB
// Simple code to tranmsit Lo-Ra packets using E32-433T UART based LoRa Transceiver.

void setup() {
   Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {


  
 for(int x=0;x<10000;x++)
 { 
  Serial.print("Received packet ");
  Serial.print(x);
  Serial.print("\n");
  delay(2000);
 }

}
