#include "../headers/tipo_elemento.h"
#include <stdlib.h>

TipoElemento te_crear(int clave) {
    TipoElemento te = (TipoElemento) malloc(sizeof(struct TipoElemento));
    te->clave = clave;
    te->valor = NULL;
    return te;
}

TipoElemento te_crear_con_valor(int clave, void* valor) {
    TipoElemento te = (TipoElemento) malloc(sizeof(struct TipoElemento));
    te->clave = clave;
    te->valor = valor;
    return te;
}