#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

double summ2(double eps)
{
double a[100];
double RAND_MAX_F = RAND_MAX;
int min = -100;
int max = 100;
for(int i=0; i<=100; ++i)
{
    a[i] = rand() % (max - min + 1) + min;
}
double sum = 0;
int i = 0
do
{
    sum += a[i];
    ++i;
} while (fabs(a[i]) > eps)
return sum;
}
