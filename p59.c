#include<stdio.h>
int main()
{
int pass,fail,matt,scii,engg,kann,hiss;
float mat,sci,eng,kan,his,avg,total;
printf("enter the marks in order of mat,sci,eng,kan,his");
scanf("%f %f %f %f %f",&mat,&sci,&eng,&kan,&his);
avg=((mat+sci+eng+kan+his)/5);
total=mat+sci+eng+kan+his;
if(avg>90){
printf("distinction\n");
}
else if((avg<=90)&&(avg>60)){
printf("First class\n");
}
else if((avg<=60)&&(avg>=35)){
printf("second class\n");
}
else if(avg<35){
printf("fail\n");
}
(mat>35)?(matt=1):(matt=0);
(sci>35)?(scii=1):(scii=0);
(eng>35)?(engg=1):(engg=0);
(kan>35)?(kann=1):(kann=0);
(his>35)?(hiss=1):(hiss=0);
pass=matt+scii+engg+kann+hiss;
fail=5-pass;
printf("the no.of subs passed:%d\n and failed=%d",pass,fail);



return 0;
}
