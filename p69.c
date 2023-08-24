#include<stdio.h>
int main()
{
int a,years,weeks,days;
printf("enter the no.of days\n");
scanf("%d",&a);
years=a/365;
weeks=((a%365)/7);
days=((a%365)%7);
printf("the condensed form of given days is %d years %d weeks and %d days",years,weeks,days);
return 0;
}
