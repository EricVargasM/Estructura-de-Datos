  
#include "cola.h"

int main(void) {

  struct Cola *mcola = NULL;

  insertar(&mcola, 1);
  insertar(&mcola, 2);
  insertar(&mcola, 3);
  insertar(&mcola, 4);
  insertar(&mcola, 5);
  insertar(&mcola, 6);
  insertar(&mcola, 7);

  mostrar(&mcola);


  return 0;
}
