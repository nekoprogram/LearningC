#include <stdio.h>


void saludar();

int main()
{
    
    char nombre[50];
    printf("Introduce tu nombre:\t");
    fflush(stdin);
    scanf("%s",nombre);
    printf("Hola %s\n",nombre);
   
    /*
     * Llamando a una funcion definida en otro archivo
     *
     * */
   
    saludar();
    return 0;

}
