#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter the num:");
scanf("%d",&n);
if(n<0)
{
printf("The num is negative");
}
else if(n==0)
{
printf("the num is zero");
}
else
{
printf("The num is positive");
}
getch();
}
