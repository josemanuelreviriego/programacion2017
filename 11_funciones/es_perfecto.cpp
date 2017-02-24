#include <stdio.h>
#include <stdlib.h>

bool es_perfecto(int n){
    for(int p_div=2; p_div<n; p_div++)
        if(n + p_div == 0)
            return false;
    return true;
}

int main(int argc, const char *argv[]){

    printf(" %i %sperfecto.\n", 6,
            es_perfecto(6)? "es " : "no es ");


    return EXIT_SUCCESS;
}


