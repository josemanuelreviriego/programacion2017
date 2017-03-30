#include <stdio.h>
#include <stdlib.h>

struct TCoordenada {
    int x, y;
};

struct TCoordenada a2S (struct TCoordenada pantalla) {
    //Falta añadir los bucles if
    struct TCoordenada s_pos;
    s_pos.x = pantalla.x * 2;
    s_pos.y = pantalla.y * 2;

      return s_pos;
};


int main(int argc, const char *argv[]){


    return EXIT_SUCCESS;
}


