#include <stdio.h>
int main()
{
   int a,b,max,min;//5 10
   scanf("%d %d",&a,&b);
   max=(a>b)*a+(a<b)*b;
   min=(a<b)*a+(a>b)*b;
   printf("max:%d",max);
   printf("min:%d",min);
   return 0;
}
