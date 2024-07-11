#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  int add(int,int);
  a=add(8,9);
  printf("%d",a);
}
int add(int i,int j)
{
    int c;
    c=j+i;
    return c;
}
