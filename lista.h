
#ifndef  LISTA_H
#define  LISTA_H
//========================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//========================================
// DEFINICAO DO TIPO PRODUTO
typedef struct Produto{
  int codigo;
  char descricao[100];
  float valor;
  int quantidade;
}Produto;

void print_produto(Produto p){

  printf("{%d, %s, %.2f, %d}\n", p.codigo, p.descricao, p.valor, p.quantidade);

}

// DEFINICAO DO TIPO CELULA
typedef struct Celula{
  Produto dado;
  struct Celula *prox;
}Celula;

Celula *new_celula(){

  Celula *tmp = (Celula*)malloc(sizeof(Celula));
  tmp->prox = NULL;
  return tmp;
}


// DEFINICAO DO TIPO LISTA
typedef struct Lista{
  Celula *inicio;
  Celula *fim;
  int tam;
}Lista;

//========================================
void new_lista(Lista *l){
  l->inicio = l->fim = new_celula();
  l->tam = 0;
}

void add_lista_end(Lista *l, Produto p){
  
  Celula *tmp = new_celula();
  tmp->dado = p;

  l->fim->prox = tmp;
  l->fim = tmp;
  l->tam++;
}

void print_lista(Lista *l){

  Celula *tmp = l->inicio->prox;
  while(tmp != NULL){
    print_produto(tmp->dado);
    tmp = tmp->prox;
  }
}


void delete_lista_cod(Lista *l, int codigo){

  // LOCALIZA A CELULA COM ESSE codigo
  Celula *ant = l->inicio;
  Celula *tmp = l->inicio->prox;

  while(tmp!=NULL && tmp->dado.codigo != codigo){
    ant = ant->prox;
    tmp = tmp->prox;
  }

  if(tmp!=NULL){

    ant->prox = tmp->prox;

    free(tmp);
    tmp = NULL;

    // VERIFICA SE EH O ULTIMO ELEMENTO
    if(ant->prox == NULL){
      l->fim = ant;
    }

    l->tam--;
  }
}

void delete_lista_pos(Lista *l, int pos){

  // LOCALIZA A CELULA COM ESSE codigo
  Celula *ant = l->inicio;
  Celula *tmp = l->inicio->prox;

  while(tmp!=NULL && pos > 0){
    ant = ant->prox;
    tmp = tmp->prox;
    pos--;
  }

  if(tmp!=NULL){

    ant->prox = tmp->prox;

    free(tmp);
    tmp = NULL;

    // VERIFICA SE EH O ULTIMO ELEMENTO
    if(ant->prox == NULL){
      l->fim = ant;
    }

    l->tam--;
  }
}

void delete_lista_begin(Lista *l){
  delete_lista_pos(&estoque, 0);
}

void delete_lista_end(Lista *l){
  delete_lista_pos(&estoque, l->tam-1);
}


//========================================
#endif 