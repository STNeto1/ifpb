#include <stdio.h>

int main(void)
{

  float salarioInicial, valorAumento;
  int porcentagem;

  scanf("%f", &salarioInicial);

  if (salarioInicial <= 280)
  {
    porcentagem = 20;
  }
  else if (salarioInicial > 280 && salarioInicial <= 700)
  {
    porcentagem = 15;
  }
  else if (salarioInicial > 700 && salarioInicial < 1500)
  {
    porcentagem = 10;
  }
  else
  {
    porcentagem = 5;
  }

  valorAumento = salarioInicial * (porcentagem * 0.01);

  printf("%.2f\n", salarioInicial);
  printf("%d\n", porcentagem);
  printf("%.2f\n", valorAumento);
  printf("%.2f", salarioInicial + valorAumento);

  return 0;
}