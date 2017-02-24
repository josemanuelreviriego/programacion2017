#include <stdio.h>
#include <stdlib.h>

int multiplica(int a, int b){
    return a * b;
}

int main(int argc, const char *argv[]){

    int a, b;
    a=getchar() - '0';
    b=getchar() - '0';

    printf("%ix%i=%i\n", a, b, multiplica(a,b));
    //a=getchar()-'0', b=getchar()-'0', multiplica(a,b));


    return EXIT_SUCCESS;
}


