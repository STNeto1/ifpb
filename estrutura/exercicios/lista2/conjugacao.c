#include <stdio.h>
#include <string.h>

int main()
{
  char inf[50];
  char ver[50];

  scanf(" %s", inf);

  // remover ultimo
  inf[strlen(inf) - 1] = 0;

  // copiar pra ver
  // adicionar ndo
  strcpy(ver, inf);
  strcat(ver, "ndo");

  printf("%s %s", inf, ver);

  return 0;
}