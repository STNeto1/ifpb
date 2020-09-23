#include <stdio.h>

struct Order
{
  int size;
  int values[5];
};

int main()
{
  struct Order pares;
  pares.size = 0;

  struct Order impares;
  impares.size = 0;

  for (int i = 0; i < 15; i++)
  {
    int val = 0;
    scanf("%d", &val);

    if (val % 2 == 0)
    {
      pares.values[pares.size] = val;
      pares.size++;

      if (pares.size == 5)
      {
        for (int j = 0; j < pares.size; j++)
        {
          printf("par[%d] = %d\n", j, pares.values[j]);
        }
        pares.size = 0;
      }
    }
    else
    {
      impares.values[impares.size] = val;
      impares.size++;

      if (impares.size == 5)
      {
        for (int j = 0; j < impares.size; j++)
        {
          printf("impar[%d] = %d\n", j, impares.values[j]);
        }
        impares.size = 0;
      }
    }
  }

  for (int j = 0; j < impares.size; j++)
  {
    printf("impar[%d] = %d\n", j, impares.values[j]);
  }

  for (int j = 0; j < pares.size; j++)
  {
    printf("par[%d] = %d\n", j, pares.values[j]);
  }

  return 0;
}