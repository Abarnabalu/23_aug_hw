#include<stdio.h>
int main()
{
int a,b;
printf("enter the values");
scanf("%d%d",&a,&b);
if((a>=0)&&(b>=0))
{
printf("The coordinate points lies in I quadrant");
}
else if((a<0)&&(b>=0))
{
printf("The coordinate points lies in II quadrant");
}
else if((a<0)&&(b<0))
{
printf("The coordinate points lies in III quadrant");
}
else if((a>=0)&&(b<0))
{
printf("The coordinate points lies in IV quadrant");
}
return 0;
}
