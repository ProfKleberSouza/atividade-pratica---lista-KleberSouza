# Atividade Prática de Lista Encadeada

O objetivo desta atividade é desenvolver, de forma modular, as funcionalidades de uma lista encadeada. Considere as seguintes estruturas para definição da lista:

```c
// DEFINICAO DO TIPO PRODUTO
typedef struct Produto{
  int codigo;
  char descricao[100];
  float valor;
  int quantidade;
}Produto;
```

```c
// DEFINICAO DO TIPO CELULA
typedef struct Celula{
  Produto dado;
  struct Celula *prox;
}Celula;
```

```c
// DEFINICAO DO TIPO LISTA
typedef struct Lista{
  Celula *inicio;
  Celula *fim;
  int tam;
}Lista;
```
Nossa estrutura lista será utilizada para desenvolver um sistema de controle de estoque com as seguintes funcionlidades:
 - CRUD de Produto (Create, Read, Update, Delete)
 - Relatórios para verificar o status da lista, mostrando a quantidade de produtos, produtos com estoque baixo, produtos ordenados por valor, por quantidade, por nome, etc...
 - Uma funcionalidade única e exclusiva, definida por você

Você deverá desenvolver um programa, de forma modular, implementando primeiro toda as funções do programa e realizando testes unitários para cada função. Depois de todas as funções desenvolvidas e testadas, você deverá criar um programa principal para chamar as funções.

Você deverá implementar as funções nesta ordem:
 1. Método para criar uma lista
 2. Método para inserir um produto no inicio da lista
 3. Método para inserir um produto no fim da lista
 4. Método para pesquisar um elemento da lista por codigo
 5. Método para remover um produto no inicio da lista
 6. Método para remover um produto no final da lista
 7. Método para remover um produto especifico, que recebe o código do produto a ser removido
 8. Método para alterar os dados de um produto especifico, que recebe o código do produto a ser alterado
 9. Método para exibir toda a lista
 10. Método para retornar o tamanho da lista
 11. Demais funcionalidades do sistema

Você deverá implementar passo a passo cada funcionalidade, realizar testes unitários e registrar passo a passo o seu desenvolvimento.


