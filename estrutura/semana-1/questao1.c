#include <stdio.h>
int main()
{
  float f = 10.5;
  float *pf = &f;

  *pf = 300;

  printf("%f\n", *pf);

  return 0;
}