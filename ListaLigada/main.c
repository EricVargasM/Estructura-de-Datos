#include "listaligada.h"

int main(void) {

  struct ListaLigada *milista = NULL;

  insertar(&milista, 1);
  insertar(&milista, 2);
  insertar(&milista, 3);
  insertar(&milista, 4);
  insertar(&milista, 5);
  insertar(&milista, 6);
  insertar(&milista, 7);

  mostrar(milista);

  printf("La lista contiene: %d elementos\n", numelementos(milista));


  eliminar(&milista, 3);
  eliminar(&milista, 10);

  mostrar(milista);


  printf("La lista contiene: %d elementos\n", numelementos(milista));

  return 0;
}
