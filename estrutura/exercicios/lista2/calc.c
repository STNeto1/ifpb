#include <stdio.h>
#include <string.h>

int compare_strings(char[], char[]);

int main()
{
  float f1 = 0, f2 = 0, res = 0;
  char op[50];

  scanf("%f", &f1);
  scanf("%f", &f2);

  fflush(stdin);
  scanf(" %s", op);

  if (strcmp(op, "soma") == 0)
  {
    res = f1 + f2;
  }
  else if (strcmp(op, "multiplicacao") == 0)
  {
    res = f1 * f2;
  }
  else if (strcmp(op, "divisao") == 0)
  {
    res = f1 / f2;
  }
  else
  {
    res = f1 - f2;
  }

  printf("resultado = %.2f", res);

  return 0;
}