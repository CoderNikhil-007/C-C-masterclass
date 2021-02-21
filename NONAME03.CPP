#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[50],high,low,mid,key,n;
printf("Enter the number of values in array \n");
scanf("%d",&n);
printf("Enter the elements in ascending order \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
low=0;
high=n-1;
mid = (high+low)
