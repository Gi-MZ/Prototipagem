// referencias bibliograficas
//https://www.tinkerhobby.com/pull-up-resistors/
//https://learn.sparkfun.com/tutorials/pull-up-resistors/all

#define led1  2
#define led2  3
#define botao 4

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);  

  pinMode(botao, INPUT_PULLUP);


}
/* Comentario de bloco */
int lDelay = 100;

void loop()
{
  

  if (digitalRead(botao) == LOW)
  {
    while (digitalRead(botao) == LOW);
    lDelay += 100;
    if (lDelay > 500)
      lDelay = 100;
  }
 
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  delay(lDelay); // Wait for 1000 millisecond(s)
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);  
  delay(lDelay); // Wait for 1000 millisecond(s)
 
}
