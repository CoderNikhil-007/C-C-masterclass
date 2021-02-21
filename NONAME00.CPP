#include<stdio.h>
#include<conio.h>

void main()
{
int i,n,sum=0;
printf("Enter the number of terms:");
scanf("%d",&n);

printf("\nThe odd numbers are: ");
for(i=1;i<=n;i++)
{
printf("%d",2*i-1);
sum+=2*i-1;
}
printf("\nThe sum of numbers are: %d \n",sum);

getch();
}