#include<stdio.h>
int main(){
  long long n,m,l;
  long long i,j,k;
  long long amat[101][101]={{}};
  long long bmat[101][101]={{}};
  long long ans[101][101]={{}};
  scanf("%lld %lld %lld",&n,&m,&l);
  for(j=0;j<n;j++){
    for(i=0;i<m;i++){
      scanf("%lld ",&amat[j][i]);
    }
  }
  for(j=0;j<m;j++){
    for(i=0;i<l;i++){
      scanf("%lld ",&bmat[j][i]);
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<l;j++){
      for(k=0;k<m;k++){
      ans[i][j]+=amat[i][k]*bmat[k][j];
    }
  }
}
  for(i=0;i<n;i++){
    for(j=0;j<l;j++){
      printf("%lld",ans[i][j]);
      if(j!=l-1) printf(" ");
    }
    printf("\n");
  }
}
