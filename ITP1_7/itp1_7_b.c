#include<stdio.h>
int main(){
  int i,j,k,n,x,a,s,t;
  for(;;){
    a=0;
    scanf("%d %d",&n,&x);
    if(n==0 &&x==0) break;

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      for(k=1;k<=n;k++){
        if(i==j||j==k||i==k){
        }else{
          s=i+j+k;
          if(x==s){
              a+=1;
          }
        }
      }
    }
  }
  t=3*2*1;
  printf("%d\n",a/t);
  }
  return 0;
}
