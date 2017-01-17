#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char **argv){
    double lado;
    double ladomayor;
    double ladomenor;
    double altura;
    double base;
    int opciones;
    double radio;

    printf("Escoge una opcion(1-5): 1 es cuadrado, 2 es rectangulo y 3 es triangulo, 4 es circunferencia: ");
    scanf(" %i", &opciones);

    switch(opciones){
        case 1:
        printf("Cuanto mide el lado:\n");
        scanf(" %lf", &lado);
        printf("Área: %lf \n", lado * lado);
        break;

        case 2:
        printf("Cuanto mide el lado mayor:\n");
        scanf(" %lf", &ladomayor);
        printf("Cuanto mide el lado menor:\n");
        scanf(" %lf", &ladomenor);
        printf("Área: %lf \n", ladomayor * ladomenor);
        break;

        case 3:
        printf("Cuanto mide la base:\n");
        scanf(" %lf", &base);
        printf("Cuanto mide la altura:\n");
        scanf(" %lf", &altura);
        printf("Área: %lf \n", (base * altura)/2) ;
        break;

        case 4:
        printf("Cuanto mide el radio:\n");
        scanf(" %lf", &radio);
        printf("Área: %lf", 3.14 * (radio * radio));
    };

    return EXIT_SUCCESS;
}
