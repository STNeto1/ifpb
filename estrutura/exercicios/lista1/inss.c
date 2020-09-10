#include <stdio.h>
#include <math.h>

int main(void)
{

  float sal = 0;
  float res = 0;
  float teto = 5839.45;

  scanf("%f", &sal);

  if (sal <= 1751.81)
  {
    res = sal * 0.08;
  }
  else if (sal > 1751.82 && sal <= 2919.72)
  {
    res = sal * 0.09;
  }
  else
  {
    res = (sal > 5839.45 ? teto : sal) * 0.11;
  }

  res = floor(10000 * res) / 10000;

  printf("Desconto do INSS: R$ %f", res);

  return 0;
}