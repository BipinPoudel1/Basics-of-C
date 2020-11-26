/*Program that asks a number and print the remainder after dividing the number by 5.*/
#include <stdio.h>
int main(){
      int num,R;
      printf("Input a number_ ");
      scanf("%d",&num);
      R=num%5;
      printf("Remainder after diving %d by 5_ %d",num,R);
      return 0;
}