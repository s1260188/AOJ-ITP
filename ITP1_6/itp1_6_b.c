#include<stdio.h>

int main(){
  int n,i,nm,h,l;
  char ch;
  l = 4,h = 13 ;
  int month[4][13] = {{0}};
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf(" %c %d",&ch,&nm);
    if('S' == ch){
      month[0][nm-1]=1;
    }else if('H' == ch){
      month[1][nm-1]=1;
	}else if('C' == ch){
      month[2][nm-1]=1;
    }else if('D' == ch){
      month[3][nm-1]=1;
    }
  }
  for(l=0;l<4;l++){
    for(h=0;h<13;h++){
      if(month[l][h] != 1){
	if(l==0){
	  printf("S %d\n",h+1);
	}else if(l==1){
	  printf("H %d\n",h+1);
	}else if(l==2){
	  printf("C %d\n",h+1);
	}else if(l==3){
	  printf("D %d\n",h+1);
	}
      }
    }
  }
      return 0;
  }
