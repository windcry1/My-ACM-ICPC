#include "stdio.h"
int fun(int *d,int i){
 if(i>1){
  int j;
  j=fun(d,i-1);
  return j>d[i-1]?j:d[i-1];
 }
 else
  return d[0];
}
int main(){
 int x[]={12,35,27,28,32,29,16};
 printf("%d\n",fun(x,7));
}
