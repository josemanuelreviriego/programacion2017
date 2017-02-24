#include <stdio.h>
#include <stdlib.h>

bool es_primo(int n){
    for(int p_div=2; p_div<n; p_div++)
        if(n % p_div == 0)
            return false;
    return true;
}

int main(int argc, const char *argv[]){

    printf(" %i %sprimo.\n", 7,
            es_primo(7)? "es " : "no es ");


    return EXIT_SUCCESS;
}


