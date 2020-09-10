#include <stdio.h>

int main(void)
{

  int precAve, precCar, precPas;
  int valAve, valCar, valPas;

  scanf("%d", &precAve);
  scanf("%d", &precCar);
  scanf("%d", &precPas);
  scanf("%d", &valAve);
  scanf("%d", &valCar);
  scanf("%d", &valPas);

  float sum = (precAve * valAve) + (precCar * valCar) + (precPas * valPas);

  printf("Valor: R$%.2f", sum);

  return 0;
}