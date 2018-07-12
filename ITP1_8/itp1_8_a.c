#include<stdio.h>
int main(){
  char a;
  while(1){
    scanf("%c",&a);
    if(a=='\n') break;
    if('a'<=a && a<='z'){
      a-=32;
    }else if('A'<=a&&a<='Z'){
      a+=32;
    }
    printf("%c",a);
  }
  
  printf("\n");

  return 0;
}
