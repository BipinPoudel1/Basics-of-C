/*Convert given length in mm in cm, m and km.*/
#include <stdio.h>
int main()
{
 int n, mm, cm, m, km;
 printf("mm=\n ");
 scanf("%d",&n);
 km=n/1000000;
 n= n-(1000000*km);
 m= n/1000;
 n=n-(1000*m);
 cm= n/10;
 mm=n-(cm*10);
 printf("%d km(s) %d m(s) %d cm(s) and %d mm(s)",km,m,cm,mm);
 return 0;
}