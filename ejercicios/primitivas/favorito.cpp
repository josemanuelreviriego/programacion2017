#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]){
    int numero;

    printf("¿Cual es tu numero favorito?:\n");
    scanf(" %i", &numero);

    printf("Tu numero favorito es: %i \n", numero);


    return EXIT_SUCCESS;
}


