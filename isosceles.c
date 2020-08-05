///To take three sides of the triangle and determine whether the given triangle is isosceles or not.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("The three sides of triangle are= ");
    scanf("%d %d %d",&a,&b,&c);
    if (a==b || a==c || b==c)
    {
        printf("The triangle is isosceles.");
    } else
    {
        printf("The triangle is not isosceles.");
    }
    return 0;
}