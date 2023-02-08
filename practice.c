#include <stdio.h>
int main()
{
double n,k=1;
scanf("%lf",&n);
for (int i = 1; i <= n; i++)
{
    k = k * i;
}
printf("Factorial of %lf is = %lf",n,k);
return 0 ;
}