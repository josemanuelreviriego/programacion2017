#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX 29
#define CANTIDAD(x) (sizeof( (x) ) / sizeof(char *) - 1)
const char *palabra[]{
    "nariz",
    "pito",
    "huele",
    "canela",
    "rama",
     NULL
};

// Jose Manuel Reviriego Goñi

int main(int argc, const char *argv[]){
    const char *elegida;
    char adivinado[MAX];
    char letra;
    int aleatoria, fallos=0;

    printf("Acierta en 5 intentos o muere \n");

    srand(time(NULL));
    aleatoria = rand() % CANTIDAD(palabra);
    elegida = palabra[aleatoria];

    strcpy(adivinado, elegida);
    bzero(adivinado, MAX);
    for(int i=0; i<(int) strlen(elegida); i++)
        adivinado[i] = "-";

    for(int = 0; i<MAX; i++)
    printf("Introduce una letra: ");
    scanf(" %c", letra);

    if(strcmp(elegida, adivinado) == 0)
        printf("Has acertado una");
    else(strcmp(elegida, adivinado != 0)
            printf("No has acertado");
            fallos++);

    return EXIT_SUCCESS;
}


