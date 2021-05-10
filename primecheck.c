#include <stdio.h>
#include <math.h>

double findSQRT(double N)
{
  return pow(2,0.5*log2(N));
}

int main()
{
  int N =12;

  printf("%f", findSQRT(N));
  return 0;
}
