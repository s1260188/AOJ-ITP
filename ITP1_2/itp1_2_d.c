#include<stdio.h>

int main(){

  int   W, H, x, y, r;

  scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);

  if(x>=W || y>=H){
    printf("No\n");
  } else if(x<=0 || y<=0){
    printf("No\n");
  } else if(H-y<r || W-x<r){
    printf("No\n");
  } else if(0<x && x<W && 0<y && y<H && W-x>=r && H-y>=r){
    printf("Yes\n");
      }

return 0;

}
