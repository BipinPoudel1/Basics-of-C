//To add, subtract, multiply and divide two numbers.
#include <stdio.h>
int main()
{
   int a,b,c,d,e;
   float f;
   printf("Enter a number: ");
   scanf("%d",&a);
   printf("Enter another number: ");
   scanf("%d",&b);
   c=a+b;
   d=a-b;
   e=a*b;
   f=(float)a/b;
   printf("Sum= %d\n",c);
   printf("Difference= %d\n",d);
   printf("Product= %d\n",e);
   printf("Quotient= %f\n",f);
   return 0;
}