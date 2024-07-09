#include <stdio.h>

int main()
{
  int edad = 0;
  
  printf("Inserta tu edad:\t");

  scanf("%d",&edad);

  if(edad >= 18){
    printf("Eres mayor de edad\n");
  }
  else {
    printf("Eres menor de edad\n");
  }

  return 0;
}
