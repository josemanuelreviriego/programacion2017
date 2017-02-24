#include <stdio.h>
#include <stdlib.h>

#define incremento 0.001

double x_cuad(double x){
    return x*x;
}

int main(int argc, const char *argv[]){
        double tiempo, tiempo1;

        printf("En que punto quieres calcular la derivada: ");
        scanf(" %lf", &tiempo);

         tiempo1 =  tiempo + incremento;

        tiempo = (x_cuad(tiempo1) - x_cuad(tiempo)) / (tiempo1 - tiempo);

        printf(" %.3lf \n", tiempo);

    return EXIT_SUCCESS;
}


