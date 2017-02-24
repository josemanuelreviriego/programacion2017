#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10

int cuad(int x)(
        return x*x;
        );

int main(int argc, const char *argv[]){

    int numeros[10];
    int x, resultado, indice = 0, potencia = 1, grado;

    printf("Indicame los numeros que quieres meter (maximo 10): ");
    scanf(" %i", numeros[]);

    printf("Cual es el valor de x: ");
    scanf(" %i", &x);

    grado = strlen(numeros);

    do{
        x = x * cuad(potencia);
       resultado = numeros[0] * x;
       numeros++;
       indice++;
    }while(indice < grado);

    printf("Tu resultado es:  %i\n", resultado);

    return EXIT_SUCCESS;
}


