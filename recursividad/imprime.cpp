#include <stdio.h>
#include <stdlib.h>

void imprime(const char *palabra){
        if(*palabra != '\0'){
            printf("%c", *palabra);
            *palabra++;
            imprime(palabra);
        }
}

int main(int argc, const char *argv[]){
        imprime("pelos");

    return EXIT_SUCCESS;
}


