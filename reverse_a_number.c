///To reverse a number using while loop.
#include <stdio.h>
int main()
{
   int n,r,rev=0;
   printf("Enter the number, ");
   scanf("%d",&n);
   while(n!=0){
      r= n%10;
      rev=r+(rev*10);
      n=n/10;
   }
   printf("The reversed number is %d",rev);
   return 0;
}