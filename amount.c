//C program to find the amount paid by the customer from some particular criteria. //JUST A SAMPLE
#include <stdio.h>
#include <math.h>
int main()
{
      int n;
      float A;
      printf("What is the total number of call(s)? \n");
      scanf("%d",&n);
      if (n<=30){
            A=0;
      }
      else if(n>30 && n<=60){
            A= (n-30)*0.5;
      }
      else{
            A= (n-30)*0.5 +n;
      }
      printf("You have to pay Rs. %f",A);
      return 0;
}