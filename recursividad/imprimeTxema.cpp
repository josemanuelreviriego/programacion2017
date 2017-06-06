#include <stdio.h>
#include <stdlib.h>

void imprime(const char *p){
    if(*p == '\0')
        return;

        printf("%c", *p);
        imprime(p+1);

}
int main(int argc, const char *argv[]){

        imprime("dabale arroz a la zorra el abad");
        printf("\n");
    return EXIT_SUCCESS;
}


