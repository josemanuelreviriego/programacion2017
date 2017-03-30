#ifndef __PILA_H__
#define __PILA_H__

#define MAX 0x100
#define MAX_X 100
#define MAX_Y 100

#include <stdio.h>
#include <stdlib.h>

struct TMovil nave{
    double x;
    double y;
}

struct TPila{
    struct TMovil *data[MAX];
    int cima;
}

#ifdef __cplusplus
extern "C" {
#endif

bool push(struct TPila *pila, struct TMovil *movil);
bool pop(struct TPila *pila);
struct TMovil *crear_nave();
#ifdef __cplusplus
}
#endif

#endif


