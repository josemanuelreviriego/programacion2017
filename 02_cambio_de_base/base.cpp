#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){
    int decimal;

    //pide un numero decimal al usuario*/

    printf("Decimal: ");

    //guardamos ese numero en la variable decimal

    scanf(" %i", &decimal);

    // Hacer
    // Imprimir decimal % 2
    // Decimal = decimal / 2
    // Mientras decimal > 0
    do{
        printf("%i", decimal % 2);
        decimal /= 2;
    }
    while (decimal>0);

    printf("\n");

    return EXIT_SUCCESS;

}


