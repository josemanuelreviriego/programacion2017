#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define NPALABRAS 5

int main(int argc, const char *argv[]){
    char *palabra[]={"nariz","pito","huele", "canela","rama"};
    int palabra;

    printf("Acierta en 5 intentos o muere \n");

    srand(time(NULL));
    palabra = rand() % NPALABRAS;


    return EXIT_SUCCESS;
}


