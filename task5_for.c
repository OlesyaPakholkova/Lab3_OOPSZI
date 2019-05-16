#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int findFirstNegativeElement(double eps)
{
for (int i = 0; ++i)
{
    if ((fabs(a(i)) > eps)&&(a(i)>=0))
    return i;
}
return -1;
}
