#include<stdio.h>
int main(){
 int i=0;
 scanf("%d",&i);
 int a=0,b=1;
 for(;i<10;i++){
  switch(2*i){
  case 0:a++,b++;
  case 2:a++,b++;
  case 4:a++;
  case 6:b++;
  case 8:a++;
  case 10:b++;
  default: a++,b++;
  }
 }
 printf("%d,%d\n",a,b);
 return 0; 
}
