///Program that asks the radius of sphere and print the volume of sphere.
#include <stdio.h>
int main(){
      float r,  pi=3.14159, Volume;
      printf("Give me the radius of circle~ ");
      scanf("%f",&r);
      Volume=1.33333*pi*r*r*r;
      printf("Volume of Sphere- %f",Volume);
      return 0;
}