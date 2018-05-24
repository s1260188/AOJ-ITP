#include<stdio.h>

int main(){
  int H,W,i,j;
  for(;;){
    scanf("%d %d", &H,&W);
    if(H==0 && W==0) break ;
    for(j=0;j<H;j++){
      for(i=0;i<W;i++){
	printf("#");
      }
      printf("\n");
    }
    printf("\n");
  }
  return 0 ;
}
