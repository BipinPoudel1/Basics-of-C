/*Use of ternary operation*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("The value of 'a' is \n");
    scanf("%d",&a);
    printf("The value of 'b' is \n");
    scanf("%d",&b);
    c=(a>b)?a:b;
    printf("The greater one is %d",c);
    return 0;
}