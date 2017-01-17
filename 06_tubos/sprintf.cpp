#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    int numero = 12345678;
    char dni[8]; //string

    sprintf(dni, "%i", numero);



    return EXIT_SUCCESS;
}


