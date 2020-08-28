#include "stdio.h"
int f(char t[][5]){
 int p=0;
 for(int i=0;i<12;i++)
  for(int j=0;j<2;j++)
       if(t[i][j]=='J' || t[i][1]=='u')p++;
 return p;
}
int main(){
 char s[][5]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    printf("%d",f(s));
}
