#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]){
    char apellidos[30];

    printf("Dime tu nombre y apellidos:\n");
    fgets(apellidos, 100, stdin);

    printf("Tu nombre y apellidos es: %s\n", apellidos);


    return EXIT_SUCCESS;
}


