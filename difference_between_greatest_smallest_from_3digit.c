/*To find out the difference between the greatest and smallest number from the given three numbers.*/
#include <stdio.h>
int main()
{
    int c,d,e,D,S;
    printf("Enter three numbers | ");
    scanf("%d %d %d",&c,&d,&e);
    if (c>d && c>e)
    {
        D=c-d;
        S=c-e;
    }
    else if (d>e && d>c)
    {
        D= d-e;
        S= d-c;
    }
    else
    {
        D=e-c;
        S=e-d;
    }
    printf("The difference between the greatest and smallest are %d and %d", D,S);
    return 0;
    
}