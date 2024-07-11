// This C program will tell us the average of three integer value using Function.

#include<stdio.h>
#include<conio.h>
int average(int,int,int);
void main()
{
    int a,b,c,d;
    printf("\n Enter integer value of A:");
    scanf("%d",&a);
    printf("\n Enter integer value of B:");
    scanf("%d",&b);
    printf("\n Enter integer value of C:");
    scanf("%d",&c);
    d=average(a,b,c);
    printf("Average is: %d",d);
}


 int average(int i, int j, int k)
 {
     int P;
     P=(i+j+k)/3;
     return (P);

 }
