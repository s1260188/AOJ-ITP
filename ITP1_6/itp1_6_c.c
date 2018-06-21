#include<stdio.h>

int main(){
  int n,b,f,r,v,c=0,i,j,s;
  int count[4][3][10] ={{{0}}} ;
  scanf("%d",&n);
  while(1){
    if(c==n) break;
    scanf("%d %d %d %d",&b,&f,&r,&v);
    /*b=building,f=floor,r=number,v=inout*/
    count[b-1][f-1][r-1] += v;
    c++;
  }
  /*0building*/
  for(i=0;i<=2;i++){
    for(j=0;j<=9;j++){
      printf(" %d",count[0][i][j]);
      if(j==9){
	printf("\n");
      }
    }
  }
  for(s=1;s<=20;s++){
    printf("#");
  }
  printf("\n");
  /*1building*/
  for(i=0;i<=2;i++){
    for(j=0;j<=9;j++){
      printf(" %d",count[1][i][j]);
      if(j==9){
	printf("\n");
      }
    }
  }
  for(s=1;s<=20;s++){
    printf("#");
  }
  printf("\n");
  /*2buiding*/
  for(i=0;i<=2;i++){
    for(j=0;j<=9;j++){
      printf(" %d",count[2][i][j]);
      if(j==9){
	printf("\n");
      }
    }
  }
  for(s=1;s<=20;s++){
    printf("#");
  }
  printf("\n");
  /*3building*/
  for(i=0;i<=2;i++){
    for(j=0;j<=9;j++){
      printf(" %d",count[3][i][j]);
      if(j==9){
	printf("\n");
      }
    }
  }

  return 0;
}
