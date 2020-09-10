///If the marks obtained by a student in five different subjects are input through the keyboard, find out the aggregrate marks and percentage marks obtained by the student. Assume that the maximum marks obtained by student in each subject is 100.
#include <stdio.h>
int main()
{
 float e,p,m,i,c,A,Pe;
 printf("Obtained Marks in English | ");
 scanf("%f",&e);
  printf("Obtained Marks in Physics | ");
 scanf("%f",&p);
  printf("Obtained Marks in Mathematics | ");
 scanf("%f",&i);
  printf("Obtained Marks in FoIT | ");
 scanf("%f",&e);
  printf("Obtained Marks in ANSI C | ");
 scanf("%f",&c);
 A=e+p+i+m+c;
 Pe=(A/500)*100;
 if(e<=100 && p<=100 && m<=100 && i<=100 && c<=100){
  printf("Aggregrate | %f \n",A);
  printf("Percentage | %f \n",Pe);
 }
 else{
  printf("Marks cannot be more than 100");
 }
 return 0;
}