   int B = A5;
   int G = A6;
   int R = A7;

void setup()
{
   //Register our Spark function here
   Spark.function("led", ledControl);

   // Configure the pins to be outputs
   pinMode(G, OUTPUT);
   pinMode(B, OUTPUT);
   pinMode(R, OUTPUT);

   // Initialize all the LEDs to be OFF/255
   analogWrite(G, 255);
   analogWrite(B, 255);
   analogWrite(R, 255);
}


void loop() {

}

int ledControl(String command)
{
  //accepts 9 digit integer of format (255,255,255)
   int red = int(command.substring(0,3).toInt());
   int green = int(command.substring(3,6).toInt());
   int blue = int(command.substring(6).toInt());
   analogWrite(G,green);
   analogWrite(R,red);
   analogWrite(B,blue);
   //String log = String("red: "+command.substring(0,3)+", green: "+command.substring(3,6)+", blue:" + command.substring(6));
   return green;
}

