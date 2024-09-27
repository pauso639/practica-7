/*Sofía Paulina López González 
ejercicio 4 Calculadora con funciones
Practica 7 27/09/24*/

#include <stdio.h>
#include <math.h>

int resp;

int suma (int a, int b)
{
  resp = a + b;
  return(resp);
}

int suma2 (int a, int b)
{
  return(a + b)
}

int resta (int a, int b)
{
  resp = a - b;
  return(resp);
}

int multiplicacion (int a, int b)
{
  resp = a * b;
  return(resp);
}

int division (int a, int b)
{
  resp = a / b;
  return(resp);
}

}
int exp (int a, int b)
{
  resp = pow(a,b);
  return(resp);
}

int main()
{
  int a = 0, b = 0;
  int respuesta, opcion; 

  printf("dime que operacion deseas realizar");
  printf("1 .- suma\n");
  printf("2 .- resta\n");
  printf("3 .- multiplicacion\n");
  printf("4 .- division");
  printf("5 .- exponente");
  scanf("%d", &opcion);

  switch(opcion)
    {
      case 1:
        respuesta = suma (a,b);
        break;
      case 2:
        respuesta = resta (a,b);
        break;
      case 3:
        respuesta = multiplicacion (a,b);
        break;
      case 4:
        respuesta = division (a,b);
        break;
      case 5:
        respuesta = exp (a,b);
        break;
    }
