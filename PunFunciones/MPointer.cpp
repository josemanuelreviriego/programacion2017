#include <stdio.h>
#include <stdlib.h>

int multi(int op1, int op2){
    return op1 * op2;
}

int suma(int op1, int op2){
    return op1 + op2;
}

int main(int argc, const char *argv[]){
        int a = 5;
        int b = 15;
        int (*p[2])(int, int);

        p[0] = &multi;
        p[1] = &suma;


        printf("Tu multiplicacion es: %i * %i = %i \n", a, b, (*p[0]) (a,b));
        printf("Tu suma es: %i + %i = %i \n", a, b, (*p[1]) (a,b));

    return EXIT_SUCCESS;
}


