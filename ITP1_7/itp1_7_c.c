#include<stdio.h>
int main(){
 int r,c;
 int i,j;
 int mat[101][101]={{}};
 scanf("%d %d",&r,&c); /*r=行、c=列*/
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      scanf("%d",&mat[i][j]);
    }
  }
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      mat[i][c]+=mat[i][j];
    }
  }
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      mat[r][j]+=mat[i][j];
    }
  }
  for(j=0;j<c;j++){
  mat[r][c]+=mat[r][j];
}
  for(i=0;i<=r;i++){
    for(j=0;j<=c;j++){
      printf("%d",mat[i][j]);
      if(j!=c){
         printf(" ");
       }
    }
    printf("\n");
  }
  return 0;
}
