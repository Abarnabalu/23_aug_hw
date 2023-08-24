#include<stdio.h>
int main()
{
int sides,angle;
printf("enter the number of sides\n");
scanf("%d",&sides);
angle=(sides-2)*180;
printf("The sum of interior angles:%d",angle);
return 0;
}
