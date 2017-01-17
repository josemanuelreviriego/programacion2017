#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]){
        int numero;
        int mayor=0;
        int contador=1;

        do{
        printf("introduce 10 numeros: \n");
        scanf(" %i", &numero);
            if(numero > mayor)
                mayor = numero;
            contador++;
        }while(contador <= 10);

        printf("el numero mayor es %i\n", mayor);

    return EXIT_SUCCESS;
}


