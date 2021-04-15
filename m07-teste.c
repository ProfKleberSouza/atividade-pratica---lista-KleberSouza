#include <assert.h>
#include <stdio.h>
#include "lista.h"

int main() {

  // CRIA A LISTA
  Lista estoque;
  new_lista(&estoque);

  for(int i=0; i<5; i++){

    Produto p;
    p.codigo = i+1;
    sprintf(p.descricao, "Produto %d", i+1);
    p.valor = rand()%100;
    p.quantidade = rand()%50;

    add_lista_end(&estoque, p);   

  }

 
  print_lista(&estoque);
  delete_lista_pos(&estoque, estoque.tam-1);

  printf("\nAPOS EXCLUIR:\n");
  print_lista(&estoque);


  

  
  
  return 0;
}