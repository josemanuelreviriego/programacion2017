#include <stdio.h>
#include <stdlib.h>

//0: mi madre esta contenta
//1: mi padre esta contento
//2: he recibido la paga
//3: tengo novia
//4: he ganado la ultima partida
//5: tengo sueno
//6: he aprobado todo
//7: me ha salido el programa

void poner_menu(){
    system("clear");
    system("toilet --gay -fpagga ESTADO");
    printf(
            "0: mi madre esta contenta"
            "1: mi padre esta contento"
            "2: he recibido la paga"
            "3: tengo novia\n"
            "4: he ganado la ultima partida\n"
            "5: tengo sueño\n"
            "6: he aprobado todo\n"
            "7: me ha salido el ultimo programa\n"
            );
}

int main(int argc, const char *argv[]){

    unsigned char estado = 0;
    int indice, mascara;

    do {
        system("clear");
        system("toilet --gay -fpagga ESTADO");
        poner_menu();
    };

    do {
        do{
          printf("Que bit conmutas (0-7): ");
          scanf(" %i", &indice);
    } while (indice>7);

    if (indice >= 0){
        mascara = 1 << indice;
        estado = estado ^ mascara;
        printf("%u\n", estado);
    }
    }while (indice >= 0);



    return EXIT_SUCCESS;
}


