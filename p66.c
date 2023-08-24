#include<stdio.h>
int main()
{
char c;
printf("enter the character \n");
scanf("%c",&c);
if((c>='a'&& c<='z') || (c<='Z'&& c>='A'))
{
printf("The character is Alphabet");
}
else if((c>='0' && c<='9'))
{
printf("The character is a digit");
}
else
{
printf("The character is a special character");
}
return 0;
}
