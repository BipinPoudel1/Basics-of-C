//Asks an integer number 'n' and calculate sum of all natural numbers from 1 to n.
#include <stdio.h>
int main()
{
   int n, i, s=0;
   printf("n= ");
   scanf ("%d",&n);
   while(i<=n){
      s=s+i;
      i++;
   }
   printf("The sum of all natural numbers from 1 to %d= %d",n,s);
   return 0;
}