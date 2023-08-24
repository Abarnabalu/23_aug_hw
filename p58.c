#include<stdio.h>
int main()
{
int year,n,nl;
printf("Enter the year\n");
scanf("%d",&year);
if(year%4==0)
{
printf("the given year is leap year\n");
n=year+4;
printf("the next leap year is:%d",n);
}
else
{
printf("the year is not a leap year\n");
nl=year%4;
printf("The next leap year is :%d",((year-nl)+4));
}
return 0;
}
