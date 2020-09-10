//Take the number and convert into hour, minute and second.
#include <stdio.h>
int main()
{
 int sec, h, m, s;
 printf("Give seconds_ ");
 scanf("%d",&sec);
 h=sec/3600;
 m=(sec-(3600*h))/60;
 s=(sec-(3600*h))-(m*60);
 printf("h:m:s_ %d:%d:%d",h,m,s);
 return 0;
}