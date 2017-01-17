#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    int dni;
    char letra[23] = {
        'T','R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D', 'X', 'B', 'N', 'J','Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K', 'E'
    };

    printf("introduce DNI (sin letra): ");
    scanf(" %i", &dni);

    printf("El resto es: %i \n", dni % 23);

    return EXIT_SUCCESS;
}


