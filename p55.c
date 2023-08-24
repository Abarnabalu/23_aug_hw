#include<stdio.h>
int main()
{
int month,date;
printf("Enter the month in number\n");
scanf("%d",&month);
printf("print the date\n");
scanf("%d",&date);
switch(month)
{
case 1: if(date%7==1){
printf("The day is sunday");
}
else if(date%7==2){
printf("The day is monday");
}
else if(date%7==3){
printf("The day is tuesday");
}
else if(date%7==4){
printf("The day is wednesday");
}
else if(date%7==5){
printf("The day is thursday");
}
else if(date%7==6){
printf("The day is friday");
}
else if(date%7==0){
printf("The day is saturday");
}
break;

case 2: if(((date+31))%7==1){
printf("The day is sunday");
}
else if(((date+31))%7==2){
printf("The day is monday");
}
else if(((date+31))%7==3){
printf("The day is tuesday");
}
else if(((date+31))%7==4){
printf("The day is wednesday");
}
else if(((date+31))%7==5){
printf("The day is thursday");
}
else if(((date+31))%7==6){
printf("The day is friday");
}
else if(((date+31))%7==0){
printf("The day is saturday");
}
break;
case 3: if(((date+59))%7==1){
printf("The day is sunday");
}
else if(((date+59))%7==2){
printf("The day is monday");
}
else if(((date+59))%7==3){
printf("The day is tuesday");
}
else if(((date+59))%7==4){
printf("The day is wednesday");
}
else if(((date+59))%7==5){
printf("The day is thursday");
}
else if(((date+59))%7==6){
printf("The day is friday");
}
else if(((date+59))%7==0){
printf("The day is saturday");
}
break;
case 4: if(((date+90))%7==1){
printf("The day is sunday");
}
else if(((date+90))%7==2){
printf("The day is monday");
}
else if(((date+90))%7==3){
printf("The day is tuesday");
}
else if(((date+90))%7==4){
printf("The day is wednesday");
}
else if(((date+90))%7==5){
printf("The day is thursday");
}
else if(((date+90))%7==6){
printf("The day is friday");
}
else if(((date+90))%7==0){
printf("The day is saturday");
}
break;
case 5: if(((date+120))%7==1){
printf("The day is sunday");
}
else if(((date+120))%7==2){
printf("The day is monday");
}
else if(((date+120))%7==3){
printf("The day is tuesday");
}
else if(((date+120))%7==4){
printf("The day is wednesday");
}
else if(((date+120))%7==5){
printf("The day is thursday");
}
else if(((date+120))%7==6){
printf("The day is friday");
}
else if(((date+120))%7==0){
printf("The day is saturday");
}
break;
case 6: if(((date+151))%7==1){
printf("The day is sunday");
}
else if(((date+151))%7==2){
printf("The day is monday");
}
else if(((date+151))%7==3){
printf("The day is tuesday");
}
else if(((date+151))%7==4){
printf("The day is wednesday");
}
else if(((date+151))%7==5){
printf("The day is thursday");
}
else if(((date+151))%7==6){
printf("The day is friday");
}
else if(((date+151))%7==0){
printf("The day is saturday");
}
break;
case 7: if(((date+181))%7==1){
printf("The day is sunday");
}
else if(((date+181))%7==2){
printf("The day is monday");
}
else if(((date+181))%7==3){
printf("The day is tuesday");
}
else if(((date+181))%7==4){
printf("The day is wednesday");
}
else if(((date+181))%7==5){
printf("The day is thursday");
}
else if(((date+181))%7==6){
printf("The day is friday");
}
else if(((date+181))%7==0){
printf("The day is saturday");
}
break;
case 8: if(((date+212))%7==1){
printf("The day is sunday");
}
else if(((date+212))%7==2){
printf("The day is monday");
}
else if(((date+212))%7==3){
printf("The day is tuesday");
}
else if(((date+212))%7==4){
printf("The day is wednesday");
}
else if(((date+212))%7==5){
printf("The day is thursday");
}
else if(((date+212))%7==6){
printf("The day is friday");
}
else if(((date+212))%7==0){
printf("The day is saturday");
}
break;
case 9: if(((date+243))%7==1){
printf("The day is sunday");
}
else if(((date+243))%7==2){
printf("The day is monday");
}
else if(((date+243))%7==3){
printf("The day is tuesday");
}
else if(((date+243))%7==4){
printf("The day is wednesday");
}
else if(((date+243))%7==5){
printf("The day is thursday");
}
else if(((date+243))%7==6){
printf("The day is friday");
}
else if(((date+243))%7==0){
printf("The day is saturday");
}
break;
case 10: if(((date+273))%7==1){
printf("The day is sunday");
}
else if(((date+273))%7==2){
printf("The day is monday");
}
else if(((date+273))%7==3){
printf("The day is tuesday");
}
else if(((date+273))%7==4){
printf("The day is wednesday");
}
else if(((date+273))%7==5){
printf("The day is thursday");
}
else if(((date+273))%7==6){
printf("The day is friday");
}
else if(((date+273))%7==0){
printf("The day is saturday");
}
break;
case 11: if(((date+304))%7==1){
printf("The day is sunday");
}
else if(((date+304))%7==2){
printf("The day is monday");
}
else if(((date+304))%7==3){
printf("The day is tuesday");
}
else if(((date+304))%7==4){
printf("The day is wednesday");
}
else if(((date+304))%7==5){
printf("The day is thursday");
}
else if(((date+304))%7==6){
printf("The day is friday");
}
else if(((date+304))%7==0){
printf("The day is saturday");
}
break;
case 12: if(((date+334))%7==1){
printf("The day is sunday");
}
else if(((date+334))%7==2){
printf("The day is monday");
}
else if(((date+334))%7==3){
printf("The day is tuesday");
}
else if(((date+334))%7==4){
printf("The day is wednesday");
}
else if(((date+334))%7==5){
printf("The day is thursday");
}
else if(((date+334))%7==6){
printf("The day is friday");
}
else if(((date+334))%7==0){
printf("The day is saturday");
}
break;
default:printf("enter correct number:");
}

return 0;
}
