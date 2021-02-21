#include<stdio.h>
#include<conio.h>

int fact(int);
void main()
{
int n,f;
printf("Enter the number \n");
scanf("%d",&n);
f = fact(n);
printf("Factorial of the number is %d",f);
getch();
clrscr();
}
int fact(int k)
{int d;
while(k==0)
return 1;
d = k*fact(k-1);
return d;
}

