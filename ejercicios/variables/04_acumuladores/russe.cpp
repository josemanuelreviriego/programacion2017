#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    int numero1, operando1,
        numero2, operando2,
        resultado = 0;

    printf("Operando 1: ");
    scanf(" %i", &numero1);
    operando1 = numero1;

    printf("Operando 2: ");
    scanf(" %i", &numero2);
    operando2 = numero2;

    do {
        if(numero2 % 2 == 1)
            resultado += numero1;
        numero2 >>= 1;
        numero1 <<= 1;
    } while (numero2 > 0);

    printf(" %i x %i = %i\n", operando1, operando2, resultado);

    return EXIT_SUCCESS;
}
