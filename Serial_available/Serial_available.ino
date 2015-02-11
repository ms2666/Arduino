char inData[20]; // Allocate some space for the string
char inChar; // Where to store the character read
int index = 0; // Index into array; where to store the character
int returnValue;

void setup(){
  Serial.begin(9600);
}
void loop()
{
   while((returnValue = Serial.available()) > 0) // Don't read unless
   {
       if(index < 19) // One less than the size of the array
       {
           inChar = Serial.read(); // Read a character
           inData[index] = inChar; // Store it
           index++; // Increment where to write next
           inData[index] = '\0'; // Null terminate the string
       }
   }
   Serial.print(returnValue);
   if (index > 0){
     Serial.print(inData);
     Serial.print(index);
     index = 0;
   }
}
