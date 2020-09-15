///If a five- digit number is entered through the keyboard, write a program to calculate the sum of it's digits.
#include <stdio.h>
int main()
{
  int num, a=0, b=0;
  printf("Give me a five digit number- ");
  scanf("%d",&num);
  while (num%10!=0){
    a= num%10;
    num=num/10;
    b=b+a;
}
printf("Sum of the digits= %d",b);
return 0;
}