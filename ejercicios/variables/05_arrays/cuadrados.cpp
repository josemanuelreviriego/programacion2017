#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]){
    int lista[10] = {'1','2','3','4','5','6','7','8','9'};
    int contador = 0;
    int numero = 1;

    do{
        lista[0] = lista[0] * lista[0];
        numero++;
        lista[0]++;
     }while(contador = 10);

        printf("Esto son los numeros: %i\n", *lista);

        return EXIT_SUCCESS;
}


