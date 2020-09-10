///To convert temperature in centigrade into Fahrenheit.
#include <stdio.h>
int main()
{
 float c,F;
 printf("Temperature in Centigrade: ");
 scanf("%f",&c);
 F=(c*9/5)+32;
 printf("Temperature in Fahrenheit: %f",F);
 return 0;
}