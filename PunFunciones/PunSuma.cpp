#include <stdio.h>
#include <stdlib.h>

int suma(int op1, int op2){
    return op1 + op2;
}
int main(int argc, const char *argv[]){
        int a = 15;
        int b = 20;
        int (*p)(int, int);

        p = suma;

        printf("El resultado de tu suma es: %i + %i = %i \n", a, b, p(a,b));



    return EXIT_SUCCESS;
}


