int motor1pin1 = 5; // inputs for motor 1
int motor1pin2 = 6;

int motor2pin1 = 10; // inputs for motor 2
int motor2pin2 = 9;

char move; // variable for deceiding function 

void setup()
{
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{ 
  // taking input from the user 
  if(Serial.available() > 0) 
  {
    move=Serial.read();
    Serial.println(move);
  }
// code for both wheels to move in forward direction
  if(move=='w')
  {
    digitalWrite(motor1pin1,HIGH);
    digitalWrite(motor1pin2,LOW);
    
    digitalWrite(motor2pin1,HIGH);
    digitalWrite(motor2pin2,LOW);
    delay(200);
  
  }
// code for both the wheels to move in reverse direction  
  if(move=='a')
  {
    digitalWrite(motor1pin1,LOW);
    digitalWrite(motor1pin2,HIGH);
    
    digitalWrite(motor2pin1,LOW);
    digitalWrite(motor2pin2,HIGH);
    delay(200);
  }
// code for right rotation
  if(move=='s')
  {
    digitalWrite(motor1pin1,HIGH);
    digitalWrite(motor1pin2,LOW);
    
    digitalWrite(motor2pin1,LOW);
    digitalWrite(motor2pin1,HIGH);
    delay(200);
  }
// code for left rotation
  if(move=='d')
  {
    digitalWrite(motor1pin1,LOW);
    digitalWrite(motor1pin2,HIGH);
    
    digitalWrite(motor1pin1,HIGH);
    digitalWrite(motor2pin1,LOW);
    delay(200);
  }

  else
  {
    Serial.println("enter valid input.");
  }
}
    
    
  
  