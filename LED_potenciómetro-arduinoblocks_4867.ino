double Potenciometro;

double Nivel_Iluminacion_Led;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
}


void loop()
{

    Potenciometro = map(analogRead(A0),0,1023,0,100);
    Nivel_Iluminacion_Led = map(Potenciometro, 0,100,0,255);
    analogWrite(9, Potenciometro);

}