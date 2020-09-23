#include <stdio.h>
#include <string.h>

int findCharIdx(char c, char letras[]);
int maior(char *p1, char *p2);

char letras[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int main()
{
  char s1[20];
  char s2[20];

  gets(s1);
  gets(s2);

  printf("%d\n", maior(s1, s2));

  return 0;
}

int maior(char *p1, char *p2)
{
  if (strlen(p1) > strlen(p2))
  {
    return 1;
  }

  if (strlen(p2) > strlen(p1))
  {
    return 2;
  }

  int sum = 0;
  for (int i = 0; i < strlen(p1); i++)
  {
    int s1 = findCharIdx(p1[i], letras);
    int s2 = findCharIdx(p2[i], letras);

    printf("s1: %d | s2: %d\n", s1, s2);
  }

  return 0;
}

int findCharIdx(char c, char letras[])
{
  for (int i = 0; i < 26; i++)
  {
    if (letras[i] == c)
    {
      printf("%d \n", i);
    }
  }

  return 0;
}