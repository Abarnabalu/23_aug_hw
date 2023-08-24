#include<stdio.h>
int main()
{
char a,b;
printf("enter the 2 characters\n");
scanf("%c\n %c",&a,&b);
if((a==b)||(isupper(a)==islower(b))||(islower(a)==isupper(b)))
{
printf("Both characters are equal");
}
else
{
printf("both are unequal");
}
return 0;
}


