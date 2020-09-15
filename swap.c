//To numbers are input through the keyboard. Write a program to interchange the contents.
#include <stdio.h>
int main()
{
  int a, b, temp;
  printf("Input first number~ ");
  scanf ("%d",&a);
  printf("Input second number~ ");
  scanf ("%d",&b);
  temp=a;
  a=b;
  b=temp;
  printf("After interchanging, a= %d \n",a);
  printf("After interchanging, b= %d \n",b);
  return 0;
}