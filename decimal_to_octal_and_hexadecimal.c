//Enter a number in decimal and print it in octal and hexadecimal.
#include <stdio.h>
int main(){
      int num;
      printf("Enter a number in decimal~ ");
      scanf("%d",&num);
      printf("\nIn octal~ %o",num);
      printf("\nIn Hexadecimal~ %x",num);
      return 0;
}