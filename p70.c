#include<stdio.h>
int main()
{
int nokia=15000,samsung=30000,vivo=47000,oneplus=65000,iphone=85000;
float a,b;
printf("enter the budget values (lower then higher)\n");
scanf("%f%f",&a,&b);
if((nokia>=a)&&(nokia<=b))
{
printf("you can buy nokia\n");
}
if((samsung>=a)&&(samsung<=b))
{
printf("you can buy samsung\n");
}
if((vivo>=a)&&(vivo<=b))
{
printf("you can buy  vivo\n");
}
if((oneplus>=a)&&(oneplus<=b))
{
printf("you can buy oneplus\n");
}
if((iphone>=a)&&(iphone<=b))
{
printf("you can buy iphone\n");
}

return 0;
}
