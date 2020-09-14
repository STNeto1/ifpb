#include <stdio.h>
#include <string.h>

int sumMatrixLine(int line[], int size);

int main()
{
  int n = 0, m = 0;
  char str[50];

  int vencedorIdx;
  int vencedorPts;

  scanf("%d %d", &n, &m);

  int matriz[n][m];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      scanf("%d", &matriz[i][j]);
    }
  }

  for (int i = 0; i < n; i++)
  {
    int sumLine = sumMatrixLine(matriz[i], m);

    if (i == 0)
    {
      vencedorPts = sumLine;
      vencedorIdx = i + 1;
      continue;
    }

    if (vencedorPts > sumLine)
    {
      vencedorPts = sumLine;
      vencedorIdx = i + 1;
    }
  }

  printf("%d\n", vencedorIdx);

  return 0;
}

int sumMatrixLine(int line[], int size)
{
  int sum = 0;

  for (int i = 0; i < size; i++)
  {
    sum += line[i];
  }

  return sum;
}