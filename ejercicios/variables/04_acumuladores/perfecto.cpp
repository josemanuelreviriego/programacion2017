#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]){
    int perfecto, suma = 0;

    printf("Dime un numero: ");
    scanf(" %i", &perfecto);

    for(int divisor=perfecto/2; divisor>0; divisor--)
        if(perfecto%divisor == 0)
            suma += divisor;

    printf("%i", perfecto);
    if(suma != perfecto)
        printf("no es perfecto");
    printf("perfecto\n");


    return EXIT_SUCCESS;
}


