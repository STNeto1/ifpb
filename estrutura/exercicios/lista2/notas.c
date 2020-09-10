#include <stdio.h>

int main()
{
  int tGabarito, certas;
  float porcentagem;

  scanf("%d", &tGabarito);
  char gabarito[tGabarito];
  char respostas[tGabarito];

  for (int i = 0; i < tGabarito; i++)
  {
    scanf(" %c", &gabarito[i]);
  }

  while (1)
  {
    for (int i = 0; i < tGabarito; i++)
    {
      scanf(" %c", &respostas[i]);
    }

    certas = 0;
    for (int i = 0; i < tGabarito; i++)
    {
      if (gabarito[i] == respostas[i])
      {
        certas += 1;
      }
    }

    porcentagem = (double)certas / (double)tGabarito;

    printf("Percentual de Acertos: %.1f\n", porcentagem * 100);
  }

  return 0;
}
