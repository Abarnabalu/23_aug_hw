#include<stdio.h>
int main()
{
int a;
float num1,num2,result;
printf("please enter any number that corresponding to the operation need to be done \n 1.addition\n 2.subtraction\n 3.multiplication\n 4.division\n");
scanf("%d",&a);
printf("please enter the numbers\n");
scanf("%f%f",&num1,&num2);
switch(a)
{
case 1: printf("The result of num1+num2 is %.2f",(num1+num2));
break;
case 2: printf("The result of num1-num2 is %.2f",(num1-num2));
break;
case 3: printf("The result of num1*num2 is %.2f",(num1*num2));
break;
case 4: printf("The result of num1/num2 is %.2f",(num1/num2));
break;

default: printf("Please enter the correct value");
}
return 0;
}
