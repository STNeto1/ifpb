#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10
char l[MAX][21], pos = 0;

void inserir(char *elemento);
void inserir_ord(char *elemento); // falta
void remover(char *elemento);
int buscar(char *elemento);

char *obter(int indice);
int tamanho();
void imprimir();
void apagar();

int main(void)
{
  imprimir();

  inserir("oi");
  inserir("tudo bem?");
  inserir_ord("a");

  imprimir();
  return 0;
}

void inserir(char *elemento)
{
  if (pos < MAX)
    strcpy(l[pos++], elemento);
  else
  {
    printf("Não foi possível inserir '%s'. Lista cheia.\n", elemento);
  }
}

void inserir_ord(char *elemento)
{
  int i, p;
  if (pos < MAX)
  {
    for (i = 0; i < pos; i++)
      if (strcmp(l[i], elemento) > 0)
        break;

    for (p = pos; p > i; p--)
      strcpy(l[p], l[p - 1]);

    strcpy(l[i], elemento);
    pos++;
  }
  else
  {
    printf("Não foi possível inserir %s. Lista cheia.\n", elemento);
  }
}

int buscar(char *elemento)
{
  for (int i = 0; i < pos; i++)
  {
    if (strcmp(l[i], elemento) == 0)
      return i;
  }
  return -1;
}

void remover(char *elemento)
{
  int p = buscar(elemento);

  if (p == -1)
    return;

  for (int i = p; i < pos - 1; i++)
    strcpy(l[i], l[i + 1]);
  pos--;
}

char *obter(int indice)
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
    printf("%s\n", l[i]);
  printf("\n");
}

void apagar()
{
  pos = 0;
}