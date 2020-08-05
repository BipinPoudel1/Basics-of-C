/*To find out whether the given number is positive or not.*/
#include <stdio.h>
int main()
{
    int b;
    printf("Give me any number-");
    scanf("%d",&b);
    if (b>0)
    printf("The number is positive.");
    else
    printf("The number is negative.");
    return 0;
}