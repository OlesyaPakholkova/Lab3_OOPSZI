#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

double summ(), summ2();
int findFirstElement(),findFirstNegativeElement();
void print();
int n,k;
double eps;
bool exist=1;

void main()
{
while(exist){
 printf("Tasks:\n");
 printf("1: Task 1\n");
 printf("2: Task 2\n");
 printf("3: Task 3\n");
 printf("4: Task 4\n");
 printf("5: Task 5\n");
 printf("6: Exit\n");

switch (_getch()) {
case '1':
    printf("Type n\n");
    scanf("%i", &n);
    printf("%lf\n", summ(n));
  break;
case '2':
    printf("Type eps\n");
    scanf("%lf", &eps);
    printf("%lf\n", summ2(eps));
break;
case '3':
    printf("Type n\n");
    scanf("%i", &n);
    printf("Type k\n");
    scanf("%i", &k);
    print(n,k);
break;
case '4':
    printf("Type eps\n");
    scanf("%lf", &eps);
    printf("%i\n", findFirstElement(eps));
break;
case '5':
    printf("Type eps\n");
    scanf("%lf", &eps);
    printf("%i\n", findNegativeFirstElement(eps));
break;
case '6':
   exist = 0;
break;
default:
printf("Incorrect input");
exist = 0;
break;
}
}
}
