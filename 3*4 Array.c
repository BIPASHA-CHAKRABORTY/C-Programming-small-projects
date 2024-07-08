#include <stdio.h>
#include<conio.h>
void main()
{
    int arr[3][4];
    int i,j,sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
          printf("\n Enter your number:");
          scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\n %d",arr[i][j]);
        }
        printf("\n");
    }
    
}
