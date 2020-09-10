/*Program that asks three coefficient of quadratic equation and calculate its root.*/
#include <stdio.h>
#include <math.h>
int main()
{
 float a,b,c,d,e,A,B;
 printf("Coefficients of x^2, x and constant 'c' ; ");
 scanf("%f %f %f",&a,&b,&c);
 d= (b*b)- 4*a*c;
 e= sqrt(d);
 A= (-b+e)/2*a;
 B= (-b-e)/2*a;
 printf("Square roots are %f and %f",A,B);
 return 0;
}