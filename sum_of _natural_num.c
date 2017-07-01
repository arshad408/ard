#include<stdio.h>
#include<conio.h>
void main()
{
int i, num, sum = 0;
clrscr();
printf("Enter an integer number \n");
scanf ("%d", &num);
for (i = 1; i <= num; i++)
{
sum = sum + i;
getch();
}
