#include <stdio.h>

int main(void)
{
  char nac;
  char ocu;
  int armas;
  int calibre;

  while (1)
  {
    scanf(" %c", &nac);

    if (nac != 'B' && nac != 'E')
    {
      printf("Fim");
      break;
    }

    scanf(" %c", &ocu);
    scanf("%d", &armas);
    scanf("%d", &calibre);

    if (nac == 'E')
    {
      if (armas != 0)
      {
        printf("Barrado\n");
      }
      else
      {
        printf("Liberado\n");
      }
    }
    else
    {
      if (ocu == 'T' || ocu == 'O')
      {
        if (armas <= 1 && calibre <= 22)
        {
          printf("Liberado\n");
        }
        else
        {
          printf("Barrado\n");
        }
      }
      else if (ocu == 'C')
      {
        if (armas <= 2 && calibre <= 38)
        {
          printf("Liberado\n");
        }
        else
        {
          printf("Barrado\n");
        }
      }
      else if (ocu == 'M')
      {
        printf("Liberado\n");
      }
    }
  }

  return 0;
}