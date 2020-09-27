#include <stdio.h>
#include <stdlib.h>

#define MAX 10
int l[MAX], pos = 0;

void inserir(int elemento);
void remover(int elemento);
int buscar(int elemento);

int obter(int indice);
int tamanho();
void imprimir();
void apagar();

int main(void)
{
  inserir(10);
  inserir(10);
  inserir(20);
  imprimir();
  remover(10);
  imprimir();

  return 0;
}

void inserir(int elemento)
{
  if (buscar(elemento) != -1)
  {
    printf("Não foi possível inserir %d. Elemento já se encontra na lista.\n", elemento);
    return;
  }

  if (pos < MAX)
    l[pos++] = elemento;
  else
  {
    printf("Não foi possível inserir %d. Lista cheia.\n", elemento);
  }
}

int buscar(int elemento)
{
  for (int i = 0; i < pos; i++)
  {
    if (l[i] == elemento)
      return i;
  }
  return -1;
}

void remover(int elemento)
{
  int p = buscar(elemento);

  if (p == -1)
    return;

  int nPos = 0;
  int nL[MAX];

  for (int i = 0; i < pos; i++)
  {
    if (l[i] != elemento)
    {
      nL[nPos++] = l[i];
    }
  }

  pos = nPos;
  for (int i = 0; i < pos; i++)
  {
    l[i] = nL[i];
  }
}

int obter(int indice)
{
  if (indice < 0 || indice >= pos)
  {
    printf("Indice %d fora dos limites da Lista.\n", indice);
    exit(1);
  }
  return l[indice];
}

int tamanho()
{
  return pos;
}

void imprimir()
{
  for (int i = 0; i < pos; i++)
    printf("%d ", l[i]);
  printf("\n");
}

void apagar()
{
  pos = 0;
}