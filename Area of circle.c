///To calculate AREA OF CIRCLE
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float p=3.14,r,A;
    printf("Radius | ");
    scanf("%f",&r);
    A=p*r*r;
    printf("Area= %.3f",A);
    
    return 0;
}
