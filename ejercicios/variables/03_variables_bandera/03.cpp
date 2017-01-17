#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]){
        int numero;
        int menor=0;
        int contador=1;

        do{
        printf("introduce 10 numeros: \n");
        scanf(" %i", &numero);
            if(numero < menor)
                menor = numero;
            contador++;
        }while(contador <= 10);

        printf("el numero menor es %i\n", menor);

    return EXIT_SUCCESS;
}


