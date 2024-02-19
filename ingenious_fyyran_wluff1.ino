// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);//AMARELO1
  pinMode(12, OUTPUT);//VERMELHO1
  pinMode(10, OUTPUT);//VERDE1
  pinMode(6, OUTPUT);//AMARELO2
  pinMode(5, OUTPUT);//VERMELHO2
  pinMode(4, OUTPUT);//VERDE2
}

void loop()
{
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(10, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);
      delay(3000); // Wait for 1000 millisecond(s)}
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH); 
    delay(3000); // Wait for 1000 millisecond(s)}
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW); 
    delay(3000); // Wait for 1000 millisecond(s)}
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW); 
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(10, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)}
  
}