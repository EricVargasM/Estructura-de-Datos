#include "pila.h"
int main(void){
	int op;
	struct nodo * pila=NULL;
	while(op!=4){
		printf("\nQue quieres hacer? \n"
			"1)Push. \n"
			"2)Pop. \n"
			"3)Mostrar. \n"
			"4)Salir.\n");
		scanf("%i", &op);
		switch(s){
			default: printf("Ingresa una de las opciones validas");
				break;
			case 1:
				 pila=push(pila);
				 break;
			case 2:
				if(pila!=NULL){
				       pila=pop(pila);
				       break;
				}
				else{
					printf("pila vacia");
					break;
				}
			case 3:
				if(pila!=NULL){

				printf("%i", pila->d);
				
				}
				else{
					printf("pila vacia");
				}
				break;
			case 4:
				op=4;
				break;
		}
	}
}
