#include <stdio.h>
#include <stdlib.h>

double summ(int n)
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
int i = 0;
do
{
    sum += a[i];
    ++i;
} while (i < n)
return sum;
}
