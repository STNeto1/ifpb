#include <stdio.h>
#include <string.h>

int main()
{
  char palavra[50];

  gets(palavra);

  printf("Aquilo que ");
  for (int i = 0; i < strlen(palavra) - 3; i++)
  {
    printf("%c", palavra[i]);
  }
  printf(".");

  return 0;
}