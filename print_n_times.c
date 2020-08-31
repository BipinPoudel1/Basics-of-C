/*To read an integer number 'n' from keyboard and display the message "Get Well Soon" n times.*/
#include <stdio.h>
int main()
{
   int n,i;
   printf("n= ");
   scanf("%d",&n);
   for (i=1; i<=n; i++){
      printf("Get Well Soon \n");
   }
   return 0;
}