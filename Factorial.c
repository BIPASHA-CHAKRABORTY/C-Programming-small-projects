#include<stdio.h>
int main()
{
 int n,fact=1;
 printf("\n Enter the value for factorial:");
 scanf("%d",&n);
while(n>1)
{
    fact=fact*n;
    n--;
}
printf("\n Factorial of the given value: %d",fact);
return 0;
}