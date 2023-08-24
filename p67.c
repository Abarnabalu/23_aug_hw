#include<stdio.h>
int main()
{
char ID[10],name[10];
float unit,bill;
printf("enter the customer ID\n");
scanf("%s",&ID);
printf("enter the name\n");
scanf("%s",name);
printf("enter the no.of units\n");
scanf("%f",&unit);

if(unit<83.33)
{
printf("your minimum bill amount is 100");
}
else if((unit>=83.33)&&((unit<=199)))
{
bill=unit*1.2;
printf("the total bill amount is:%.2f ",bill);
}
else if((unit>=200)&&((unit<400)))
{
bill=(unit-199)*1.5+238.8;
printf("the total bill amount is:%.2f ",bill);
}
else if((unit>=400)&&((unit<600)))
{
bill=((unit-399)*1.8)+538.8;
printf("the total bill amount is:%.2f ",bill);
}
else if(unit>600)
{
bill=((unit-599)*2)+898.8;
printf("the total bill amount is:%.2f ",bill);
}
if (bill>=400)
{
printf("The bill amount is %.3f",((bill*0.15)+bill));
}
return 0;
}
