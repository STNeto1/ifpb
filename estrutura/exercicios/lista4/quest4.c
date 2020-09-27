#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  unsigned MAX;
  int *arr, pos;
} LISTA;

void criar(LISTA *lst, int tam_MAX);
void apagar(LISTA *lst);

void inserir_ord(LISTA *lst, int elemento);
void remover(LISTA *lst, int elemento);
int buscar(LISTA *lst, int elemento);

int obter(LISTA *lst, int indice);
int tamanho(LISTA *lst);
void imprimir(LISTA *lst);

int main(void)
{
  LISTA *lst;

  criar(lst, 10);

  inserir_ord(lst, 10);
  inserir_ord(lst, 15);
  inserir_ord(lst, 5);

  printf("O elemento 10 se encotra em %d\n", buscar(lst, 10));
  printf("O elemento 5 se encotra em %d\n", buscar(lst, 5));

  remover(lst, 10);
  imprimir(lst);

  return 0;
}

void criar(LISTA *lst, int tam_MAX)
{
  lst->MAX = tam_MAX;
  lst->pos = 0;
  lst->arr = (int *)malloc(tam_MAX * sizeof(int));
}

void apagar(LISTA *lst)
{
  free(lst->arr);
}

void inserir_ord(LISTA *lst, int elemento)
{
  int i, p;
  if (lst->pos < lst->MAX)
  {
    for (i = 0; i < lst->pos; i++)
      if (lst->arr[i] >= elemento)
        break;

    for (p = lst->pos; p > i; p--)
      lst->arr[p] = lst->arr[p - 1];

    lst->arr[i] = elemento;
    lst->pos++;
  }
  else
  {
    printf("Não foi possível inserir %d. Lista cheia.\n", elemento);
  }
}

void remover(LISTA *lst, int elemento)
{
  int p = buscar(lst, elemento);

  if (p == -1)
    return;

  for (int i = p; i < lst->pos - 1; i++)
    lst->arr[i] = lst->arr[i + 1];
  lst->pos--;
}

int buscar(LISTA *lst, int elemento)
{
  for (int i = 0; i < lst->pos; i++)
  {
    if (lst->arr[i] == elemento)
      return i;
  }
  return -1;
}

int obter(LISTA *lst, int indice)
{
  if (indice < 0 || indice >= lst->pos)
  {
    printf("Indice %d fora dos limites da Lista.\n", indice);
    exit(1);
  }
  return lst->arr[indice];
}

int tamanho(LISTA *lst)
{
  return lst->pos;
}

void imprimir(LISTA *lst)
{
  for (int i = 0; i < lst->pos; i++)
    printf("%d ", lst->arr[i]);
  printf("\n");
}