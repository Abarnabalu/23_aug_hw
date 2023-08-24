#include<stdio.h>
int main()
{
float a,b,c;
printf("enter the 3 sides of triangle");
scanf("%f%f%f",&a,&b,&c);
if((a==b)&&(b==c)&&(c==a))
{
printf("the triangle is equilateral");
}
else if((a==b)||(b==c)||(c==a))
{
printf("the triangle is isosceles triangle");
}
else if((a!=b)&&(b!=c)&&(c!=a))
{
printf("the triangle is scalene triangle");
}
return 0;
}
