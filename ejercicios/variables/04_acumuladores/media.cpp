#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]){
    int numeros;
    int acumulado = 0;
    int media = 0;
    int contador = 0;

    do{
        printf("Dime 10 numeros:\n");
        scanf(" %i", &numeros);
        acumulado += numeros;
        contador++;
    }while(contador < 10);

    media = acumulado/10;
    printf("La media es: %i\n", media);


    return EXIT_SUCCESS;
}


