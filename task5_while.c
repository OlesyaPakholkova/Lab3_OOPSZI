#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int findFirstNegativeElement(double eps)
{
int i = 0
while (true)
{
    if ((fabs(a(i)) > eps)&&(a(i)>=0))
        return i;
    ++i;
}
return -1;
}
