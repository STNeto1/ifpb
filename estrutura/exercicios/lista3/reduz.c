#include <stdio.h>

void redutor(float *n1, float *n2);

int main()
{
  float n1, n2;

  scanf("%f %f", &n1, &n2);

  redutor(&n1, &n2);

  printf("%.2f %.2f", n1, n2);

  return 0;
}

void redutor(float *n1, float *n2)
{
  float res = *n1 - *n2;
  *n1 = res;
}