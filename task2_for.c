#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double summ2(double eps)
{
double sum = 0;
for (int i = 0; fabs(a(i)) > eps; ++i)
{
    sum += a(i);
}
return sum;
}
