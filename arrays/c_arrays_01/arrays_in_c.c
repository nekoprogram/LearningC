#include <stdio.h>
#include <string.h>

int main()
{
    int array[2];
    array[0] = 20;
    array[1] = 15;
    
    printf("Primer valor de la tabla:\t%d\nSegundo valor de la tabla:\t%d\n",array[0],array[1]);
    printf("Suma de los dos valores:\t%d",(array[0]+array[1]));
    printf("\n");

    return 0;
}
