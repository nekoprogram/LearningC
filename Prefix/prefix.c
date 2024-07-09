#include <stdio.h>

int main()
{
    // DDV 
    int var1 = 5, var2 = 5;

    // Se muestra 5
    // Luego var1 es incrementado a 6.
    printf("%d\n",var1++);


    // var2 es incrementado a 6
    // Luego, se muestra
    printf("%d\n",++var2);

    return 0;
}
