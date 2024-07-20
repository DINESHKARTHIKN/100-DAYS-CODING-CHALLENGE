#include <stdio.h>
int main()
{
   int a,b;
   scanf("%d %d",&a,&b);
   a=a+b;//7+3=10
   b=a-b;
   a=a-b;
   printf("a is %d",a);
   printf("b is %d",b);
   return 0;
}

