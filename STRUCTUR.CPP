#include<stdio.h>
#include<conio.h>

struct student
{
int no;
char name[20];
float marks[5],percentage,sum;
};
void main()
{
struct student s;
int i;
s.sum=0.0;
printf("Roll Number= ");
scanf("%d",&s.no);
printf("Name= ");
scanf("%s",&s.name);
printf("Marks in all subjects: \n");
for(i=0;i<5;i++)
{
scanf("%f",&s.marks[i]);
s.sum = s.sum + s.marks[i];
}
printf("%f \n",s.sum);
s.percentage =s.sum/5;
if(s.percentage<40.0)
{
printf("Percentage = %f \n",s.percentage);
printf("Status = Failed \n");
printf("Grade= F");
}

else
{
printf("Percentage = %f \n",s.percentage);
printf("Status = Passed \n");
if(s.percentage>=90.0)
{printf("Grade= O");
}
else if(s.percentage>=80.0 && s.percentage<90.0)
{printf("Grade = A");
}
else if(s.percentage>=70.0 && s.percentage<80.0)
{printf("Grade = B");
}
else if(s.percentage>=60.0 && s.percentage<70.0)
{printf("Grade = C");
}
else if(s.percentage>=50.0 && s.percentage<60.0)
{printf("Grade = D");
}
else
{printf("Grade = E");
}
}
getch();
clrscr();
}






