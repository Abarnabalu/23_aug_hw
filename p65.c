#include<stdio.h>
int main()
{
float a,b,c;
printf("enter the 3 sides of triangle");
scanf("%f%f%f",&a,&b,&c);
if(((a+b)>c)&&((c+b)>a)&&((a+c)>b))
{
printf("These lengths can form a triangle");
}
else
{
printf("These lengths cannot form a triangle");
}
return 0;
}
