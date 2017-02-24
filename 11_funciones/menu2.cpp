#include <stdio.h>
#include <stdlib.h>

 int menu(int opcion){
        printf(" 1- SUMA
                 2- RESTA
                 3- MULTIPLICA
                 4- DIVIDE
                 5- RESyTO ");

     }
 }

int main(int argc, const char *argv[]){

    char opcion = menu();

    printf("Has elegido la opcion: %c", opcion);


    return EXIT_SUCCESS;
}


