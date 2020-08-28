#include "stdio.h"
void f(char a[],char b[]){
 for(;*a!=0;)a++;
 for(;*b!=0;b+=2){
  *a++=*b;
 }
}
int main(){
 char a[20]="hello";
 char b[20]="computer";
 f(a,b);
 printf("%s,%s",a,b);
}
