#include<stdio.h>
int f1(char *str){
 int x=0;
 while(*str<='9' && *str>'0'){
  x=10*x+*str-'0';
  str++;
 }
 return x;
}
int main()
{
    char str[20]="52*1+23";
 printf("%d\n",f1(str));
}
