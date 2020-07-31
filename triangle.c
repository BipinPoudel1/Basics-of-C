#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,A,B,s;
    printf("Enter the three sides of triangle: ");
    scanf("%f %f %f",&a,&b,&c);
    if (a+b>c && a+c>b && b+c>a)
    {
        s=(a+b+c)/2;
        B=(s*(s-a)*(s-b)*(s-c));
        A= sqrt(B);
        printf("The area of the triangle is %f",A);
    } else {
        printf("Invalid sides");
    }
    return 0;
}