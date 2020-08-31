#include <stdio.h>
int main()
{
    int n=45,i,prime=1;
    for (i=2; i<45; i++) {
        if (n%i==0){
            prime=0;
            break;
        }
    }
    if (prime==0 && n!=2){
        printf ("This is not a prime number.");
    }
    else
    {
        printf("This is a prime number.");
    }
    
    return 0;
}