#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("Enter the char:");
scanf("%d",&c);
if((c>='a'&& c<='z')||(c>='A'&& c<='Z'))
{
printf("The char is alphabet");
}
else
{
printf("Not alphabet");
}
getch();
}
