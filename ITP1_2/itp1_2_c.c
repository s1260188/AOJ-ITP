#include<stdio.h>

int main(){

  int a , b, c, tmp;

  scanf("%d %d %d",&a,&b,&c);

  if(a>b){
    tmp = b;
    b = a ;
    a = tmp;
    c = c ;
  }
  if(b>c){
    a = a ;
    tmp = b;
    b = c;
    c = tmp ;
  }
    if(a>b){
    tmp = b;
    b = a ;
    a = tmp;
    c = c ;
  }
    printf("%d %d %d\n",a,b,c);

  return 0;

}
  
