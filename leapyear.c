#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("Enter the year");
scanf("%d",&year);
if((year%4==0&&year%100!=0)||(year%400==0&&year%100==0))
{
printf("leap year");
}
else
{
printf("Not a leap year");
}
getch();
}
