#include<stdio.h>
int main()
{
int temp;
printf("enter the temperature value\n");
scanf("%d",&temp);
if(temp<0)
{
printf("Freezing whether");
}
else if((temp>=0)&&(temp<10))
{
printf("Very cold whether");
}
else if((temp>=10)&&(temp<20))
{
printf("cold whether");
}
else if((temp>=20)&&(temp<30))
{
printf("normal whether");
}
else if((temp>=30)&&(temp<40))
{
printf("it's hot'");
}
else if((temp>=40))
{
printf("it's very hot'");
}
else
{
printf("enter correct temperature");
}
return 0;
}
