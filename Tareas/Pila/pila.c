#include "pila.h"

struct nodo * push ( struct nodo * pila ){
	int f;
	printf("Que dato quieres agregar?");
	scanf("%i", &f);
	struct nodo * nuevo= (struct nodo *) malloc (sizeof(struct nodo));
	nuevo->d=f;
	nuevo->sig=pila;
	pila=nuevo;
	return pila;
}
struct nodo * pop(struct nodo *pila){
	printf("%i", pila->d);
		pila=pila->sig;
		return pila;
}
