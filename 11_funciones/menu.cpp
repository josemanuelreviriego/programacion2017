#include <stdio.h>
#include <stdlib.h>

 int menu(int opcion){

     switch(opcion){
         case 1: printf("suma\n"); break;
         case 2: printf("resta\n"); break;
         case 3: printf("divide\n"); break;
         case 4: printf("multiplica\n"); break;
         case 5: printf("resto\n"); break;
     }
 }

int main(int argc, const char *argv[]){

    char opcion = menu(3);

    printf("Has elegido la opcion: %c", opcion);


    return EXIT_SUCCESS;
}


