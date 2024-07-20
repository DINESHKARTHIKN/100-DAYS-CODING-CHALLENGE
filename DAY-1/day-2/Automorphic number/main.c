#include <stdio.h>
#include<math.h>
int main()
{
   int n,l,x,ans,sq;
   scanf("%d",&n);
   sq=n*n;
   ans=sq;
   l=log10(sq);
   while(ans!=0){
    x=pow(10,l);
    ans=ans%x;
    l--;
    if(ans==n){
        printf("It is automorphic");
        break;
    }
 }
   if(ans!=n){
       printf("It is not automorphic");
   }
    return 0;
}
