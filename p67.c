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
bill=unit*1.5;
printf("the total bill amount is:%.2f ",bill);
}
else if((unit>=400)&&((unit<600)))
{
bill=((unit*1.8)+((unit*1.8)*0.15));
printf("the total bill amount is:%.2f ",bill);
}
else if(unit>600)
{
bill=((unit*2)+((unit*2)*0.15));
printf("the total bill amount is:%.2f ",bill);
}
return 0;
}
