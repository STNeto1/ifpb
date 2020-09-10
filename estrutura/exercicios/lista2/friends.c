#include <stdio.h>
#include <string.h>

int main()
{
  // char *ptr = strtok(str, delim);

  // while (ptr != NULL)
  // {
  //   printf("%s\n", ptr);
  //   ptr = strtok(NULL, delim);
  // }

  int n;
  char str[50];

  scanf("%d", &n);

  int disp[n][n];

  int i, j;
  // 0 ideia do pq preciso usar -1 aqui, mas é oq temos pra hj
  for (i = -1; i < n; i++)
  {
    gets(str);
    char *ptr = strtok(str, " ");
    j = 0;

    while (ptr != NULL)
    {
      int k = atoi(ptr);
      if (k < 0)
      {
        k *= 2;
      }
      disp[j][i] = k;

      ptr = strtok(NULL, " ");
      j++;
    }
  }

  //Displaying array elements
  printf("Two Dimensional array elements:\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (j < n - 1)
      {
        printf("%d ", disp[i][j]);
      }
      else
      {
        printf("%d", disp[i][j]);
      }

      if (j == n - 1)
      {
        printf("\n");
      }
    }
  }
  return 0;
}