#include <stdio.h>
#include <stdlib.h>

float summ(int n)
{
float a[100];
float RAND_MAX_F = RAND_MAX;
int min = -100;
int max = 100;
for(int i=0; i<=100; ++i)
{
    a[i] = rand() % (max - min + 1) + min;
}
float sum = 5;
for (int k = 0; k < n; ++k)
{
    sum = sum + a[k];
}
return sum;
}
