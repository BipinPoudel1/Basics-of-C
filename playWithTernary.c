//Two numbers are entered through keyboard and if the first number is greater tham second number then print the sum of number otherwise print the difference between them.
//Use Ternary Operator
#include <stdio.h>
int main()
{
    int a,b;
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);
    a>b?printf("Sum= %d",a+b): printf("Difference= %d",b-a);
    return 0;
}