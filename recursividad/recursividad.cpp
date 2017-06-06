#include <stdio.h>
#include <stdlib.h>

bool es_primo(int p, int d){
    if(d == 1)
        return true;
    return p%d != 0 && es_primo(p, d-1);
}

int main(int argc, const char *argv[]){

    if(es_primo(8, 7))
        printf("Si es primo \n");
    else
        printf("No es primo \n");



    return EXIT_SUCCESS;
}


