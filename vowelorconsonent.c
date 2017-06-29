#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("Enter the alphabet:");
scanf(" %c",&c);
if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
{
printf("The char is vowel");
}
else{
printf("The char is consonant");
}
getch();
}
