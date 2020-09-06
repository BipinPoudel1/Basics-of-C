//To calculate area and perimeter of rectangle
#include <stdio.h>
int main()
{
 int l,b,A,p;
 printf("Give length and breadth of rectangle");
 scanf ("%d %d",&l,&b);
 A= l*b;
 p=2*(l+b);
 printf("The area of rectangle is %d \n The perimeter of rectangle is %d",A,p);
 return 0;
}