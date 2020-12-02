///Write a program to accept 10 numbers and finds and prints the largest and smallest among those numbers.
#include <stdio.h>
int main()
{
       int array[10],i, greatest, smallest;
       for (i=0; i<10; i++){
              printf("Input a number- ");
              scanf("%d", &array[i]);
       }
       greatest= array[0];
       for (i=0; i<10; i++){
              if (array[i] > greatest){
                     greatest=array[i];
              }
       }
       smallest=array[0];
       for (i=0; i<10; i++){
              if (array[i] < smallest){
                     smallest=array[i];
              }
       }
       printf("Greatest number among these 10 numbers is %d \n", greatest);
       printf("Smallest number among these 10 numbers is %d", smallest);
       return 0;
}