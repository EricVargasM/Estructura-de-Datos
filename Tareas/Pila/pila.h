#ifndef __CONTIGUA_H__
#define __CONTIGUA_H__

#include<stdio.h>
#include<stdlib.h>
struct nodo{
	int d;
	struct nodo *sig;
};

struct nodo * push(struct nodo * pila);
struct nodo * pop(struct nodo * pila);
#endif
