#include<stdio.h>
int main()
{
int nokia=15000,samsung=30000,vivo=47000,oneplus=65000,iphone=85000;
float a,b;
printf("enter the budget values (lower then higher)\n");
scanf("%f%f",&a,&b);
if((b<=20000))
{
printf("you can buy nokia");
}
else if(b<=40000)
{
printf("you can buy nokia or samsung");
}
else if(b<=60000)
{
printf("you can buy nokia or samsung or vivo");
}
else if(b<=80000)
{
printf("you can buy nokia or samsung or vivo");
}
else if(b<=100000)
{
printf("you can buy nokia or samsung or vivo or iphone");
}

return 0;
}
