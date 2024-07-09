#include<stdio.h>
 void main()
 {
     double dsa,dld,cpp,evs,tot,per; // declaring the subjects wll used further
     
     printf("Enter the marks of Digital Logic Circuits exam:");
     scanf("%lf",&dld);
     printf("Enter the marks of Data Structure and Algorithm exam:");
     scanf("%lf",&dsa);
     printf("Enter the marks of C++ programing language exam:");
     scanf("%lf",&cpp);
     printf("Enter the marks of Environmental Studies exam:");
     scanf("%lf",&evs);
     
     //NOW WE ARE GOING TO CALCULATE THE TOTAL MARKS OF ALL FOUR SUBJECTS AND THE STUDENT`S PERCENTAGE
     
     tot=evs+dsa+dld+cpp;
     per=tot/4;
     
     printf("Total marks you got: %lf",tot);
     printf("\n Percentage: %lf",per);
     
     
     printf("\n\n Congratulation on your test, Keep it up... \t\t");
    
 };
