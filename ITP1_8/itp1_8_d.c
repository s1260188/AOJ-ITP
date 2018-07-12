#include<stdio.h>
#include<string.h>
int main(){
  char str1[100];
  char str2[100],str3[100];
  char str4[100];
  scanf("%s %s",str1,str4);
  strcpy(str2,str1);
  strcpy(str3,str1);
  strcat(str1,str2);
  strcat(str1,str3);
  if(strstr(str1,str4)==NULL) printf("No\n");
  else printf("Yes\n");
  return 0;
}
