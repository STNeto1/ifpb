#include <stdio.h>
#include <string.h>

int main()
{
  int n = 0, m = 0;
  char str[50];

  int idx = -1;
  int pts = 10000;

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
    int sum = 0;
    for (int j = 0; j < m; j++)
    {
      sum += matriz[i][j];
    }

    if (sum < pts)
    {
      pts = sum;
      idx = i;
    }
  }

  printf("%d", idx + 1);

  return 0;
}