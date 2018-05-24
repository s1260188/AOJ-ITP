#include<stdio.h>

int main(){
  long long int min,max,x,y,n,sum;
  max=-100000000;
  min=100000000;
  sum=0;
  scanf("%lld",&n);

   for(x=0;x<n;x++){
     scanf("%lld",&y);
     sum = sum+y;
     if(min>y){
       min=y;
     }
     if(max<y){
       max=y;
     }
   }
     printf("%lld %lld %lld\n",min,max,sum);
     return 0;
}
