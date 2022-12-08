#include<stdio.h>
#include<conio.h>
void main()
{
int age;float amount;
char gender,smoker;
clrscr();
printf("enter the age of the person\n");
scanf("%d",&age);
printf("enter the gender for female F amd for male M\n");
fflush(stdin);
scanf("%c",&gender);
printf("Do you smoking\n");
fflush(stdin);
scanf("%c",&smoker);
if(age>=21 && age<=30)
{
amount =10000;
}
else if(age>=31 && age<=40)
{
amount = 15000;
}
else if(age>=41 && age<=50)
{
amount = 20000;
}
else if(age>=51 && age<=60)
{
amount = 40000;
}
else
{
printf("Insurance is not possible");
getch();
}
if(gender=='m' && smoker=='y')
{
amount=amount+((amount*10)/100.00);
}
else if(gender=='f' && smoker=='n')
{
amount =amount-((amount*10)/100.00);
}
printf("%f",amount);
getch();
}
