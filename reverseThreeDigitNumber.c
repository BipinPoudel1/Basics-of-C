//To input three digit number and reverse the number without loop.
#include <stdio.h>
int main()
{
 int n,temp;
 printf("Number- ");
 scanf("%d",&n);
 printf("Reversed number- ");
 temp= n%10;
 printf("%d",temp);
 temp=n/10;
 temp= temp%10;
 printf("%d",temp);
 temp= n/10;
 temp= temp/10;
 printf("%d",temp);
 return 0;
 
}