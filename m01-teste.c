#include <assert.h>
#include <stdio.h>
#include "lista.h"

int main() {

  Lista estoque;
  //estoque = (Lista*)malloc(sizeof(Lista));
  
  new_lista(&estoque);

  assert(estoque.tam == 0 && estoque.inicio != NULL && estoque.inicio == estoque.fim);

  //free(estoque);
  
  return 0;
}