#include <stdio.h>
#include <string.h>

int main()
{
  float f1, f2, res;
  char op[50];

  scanf("%f", &f1);
  scanf("%f", &f2);

  fflush(stdin);
  fgets(op, 50, stdin);

  if (strcmp(op, "soma") == 1)
  {
    res = f1 + f2;
  }
  else if (strcmp(op, "multiplicacao") == 1)
  {
    res = f1 * f2;
  }
  else if (strcmp(op, "divisao") == 1)
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