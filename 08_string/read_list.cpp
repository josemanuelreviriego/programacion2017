#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x100
#define MAX 0x10

int main(int argc, const char *argv[]){

    char buffer[N];
    char *palabra[MAX];

    for(int i=0; i<MAX; i++){
        printf("Nombre: ");
        fgets(buffer, N, stdin);

        palabra[i] = (char *) malloc(strlen(buffer) + 1);
        strcpy(palabra[i], buffer);
};

   printf("He terminado de leer palabras. \n");
   for (int i=0; i<MAX; i++){
       printf(" %s", palabra[i]);
   };

   for(int i=0; i<MAX; i++){
    free(palabra[i]);
   };


    return EXIT_SUCCESS;
}


