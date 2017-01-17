#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]){
        int numero;
        int i;

        printf("Introduce un numero:\n");
        scanf(" %i", &numero);

        for(i=1; i<numero; i++)
        {
            if(numero%i==0){
                printf("%i es divisor\n", i);
            }
        }

    return EXIT_SUCCESS;
}


