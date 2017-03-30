// Aqui declaramos las funciones


bool push(struct TPila *pila, struct TMovil *movil){
    if(pila->cima>=MAX)
        return false;
    pila->data[pila->cima++] = dato;
    return true;
}

bool pop(struct TMovil *data){
    if(pila->cima <= 0)
        return false;
    free(pila->data[--pila->cima]);
    return true;
}

struct TMovil *crear_nave(){
    struct TNave *nueva;
    nueva = (struct TMovil *) malloc (sizeof(struct TMovil));
    nueva->x = rand % MAX_X;
    nueva->y = rand % MAX_Y;

    return nueva;
}
