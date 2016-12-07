#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    int dni;
    char letra[23];

    printf("introduce DNI (sin letra): ");
    scanf(" %i", &dni);

    printf("El resto es: %i \n", dni % 23);

    return EXIT_SUCCESS;
}


