#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int findFirstElement(double eps)
{
double a[100];
int min = -100;
int max = 100;
for(int i=0; i<=10; ++i)
{
    a[i] = rand() % (max - min + 1) + min;
}
int i = 0
while (true)
{
    if (fabs(a[i]) <= eps)
        break;
    ++i;
}
return i;
}
