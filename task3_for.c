#include <stdio.h>
#include <stdlib.h>

void print(int n, int k)
{
double a[100];
int j = 1;
int min = -100;
int max = 100;
for(int i=0; i<=100; ++i)
{
    a[i] = rand() % (max - min + 1) + min;
}
for (int i = 0; i<n; ++i)
{
    if (j!=k)
     {
            printf("%f\n",a[i]);
            j++;
     }
     else
     {
         j=1;
            continue;
     }
}
}
