#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char *ptr;

  ptr = malloc(76);

  while (1)
  {
    gets(ptr);

    if (strcmp(ptr, "the end!") == 0)
    {
      break;
    }

    for (int i = 0; i < strlen(ptr); i++)
    {
      printf("%c", toupper(ptr[i]));
    }
    printf("\n");
  }

  free(ptr);
  return 0;
}