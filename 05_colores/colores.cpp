#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){
    int rojo, amarillo, azul;

    printf("Rojo (0/1): ");
    scanf(" %i", &rojo);

    printf("Amarillo (0/1): ");
    scanf(" %i", &amarillo);

    printf("Azul (0/1): ");
    scanf(" %i", &azul);

    if(rojo)
        if(amarillo)
            if(azul)
                printf("Blanco");
            else(naranja);
        else
            if(azul)
                printf("morado");
            else
                printf("Rojo");
    else
        if(amarillo)
            if(azul)
                printf("verde");


    return EXIT_SUCCESS;
}


