#include<stdio.h>
#include<conio.h>

void main()
{
int n,sum,r;
printf("Enter the number");
printf("\n");
scanf("%d",&n);
while(n>0)
{
r=n%10;
sum=0;
sum=(sum*10)+r;
n=n/10;
}
printf("The reverse of the number is: %d",sum);
getch();
clrscr();
}