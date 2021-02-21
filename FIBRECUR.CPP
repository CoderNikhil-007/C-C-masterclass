#include<stdio.h>
#include<conio.h>
int fib(int);
void main()
{
int i,n;
printf("Enter the number of terms \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d ",fib(i));
}
getch();
clrscr();
}
int  fib(int n)
{
int f;
if(n==1||n==2)
return 1;
f = fib(n-1)+fib(n-2);
return f;
}
