/*Write a program to read 10 numbers and sorts them in an ascending order and display the sorted number.*/
#include <stdio.h>
int main()
{
       int array[10], i, a, j;
       for (i=0; i<10; i++){
              printf("Number_ ");
              scanf("%d", &array[i]);
       }
      for (i=0; i<10; i++){
             for (j=i+1; j<10; j++){
                    if (array[i] > array[j]){
                           a=array[i];
                           array[i] = array[j];
                           array[j] = a;
                    }
             }
      }
      printf("In Ascending Order: \n");
      for (i=0; i<10; i++){
             printf("%d \n", array[i]);
      }
      return 0;
}