#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int charToInt(char c);

int main()
{
  char letras[] = {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

  while (1)
  {
    char palavra[50];
    char output[50];

    gets(palavra);

    if (strcmp(palavra, "6 9 13") == 0)
    {
      break;
    }

    char *ptr = strtok(palavra, " ");

    while (ptr != NULL)
    {
      if (strlen(ptr) == 1)
      {
        printf("%c", letras[charToInt(ptr[0])]);
      }
      else
      {
        printf("%c", letras[atoi(ptr)]);
      }

      // printf("%d ", strlen(ptr));
      ptr = strtok(NULL, " ");
    }
    printf("\n");
  }

  return 0;
}

int charToInt(char c)
{
  return c - '0';
}