#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]){

    char nombre[10];

    printf("Dime tu nombre: \n");
    scanf(" %s", nombre);

    printf("Tu nombre es: %s\n", nombre);


    return EXIT_SUCCESS;
}


