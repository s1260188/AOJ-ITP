#include<stdio.h>
int main(){
  char ch[1200];
  int counter[26]={};
  int i=0;
  int num=0;
  while(scanf("%c",&ch[i])!=EOF){
    if(ch[i]>='A'&&ch[i]<='Z'){
      num=ch[i]-'A';
      counter[num]++;
    }else if(ch[i]>='a'&&ch[i]<='z'){
      num=ch[i]-'a';
      counter[num]++;
    }
  }
  num=0;
  for(i='a';i<='z';i++){
    printf("%c : %d\n",i,counter[num]);
    num++;
  }
  return 0;
}
