// Write a program to enter 10 different numbers and print them with array variables and their addresses.
#include <stdio.h>
int main(){
       int array[10], i;
       for (i=0; i<10; i++){
              printf(" \n Enter a number~ ");
              scanf("%d",&array[i]);
       }
       for (i=0; i<10; i++){
              printf("\n Array[%d]= %d \t Address= %x", i, array[i], &array[i]);
       }
}