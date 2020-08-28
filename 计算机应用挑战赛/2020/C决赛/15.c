#include  <stdio.h>
#include  <string.h>
#define   N   10
#define   M   10
int f(char str[][M],char *t)/*填空1*/
{  int  i;
   for(i=0; i<N ; i++)
     if(strcmp(str[i],t)==0) return i ;/*填空2*/
    return -1;/*填空3*/
}
main()
{ char  str[N][M]={"jony","lucy","abbe","lily","rebeca","tomme","osca","tomas","jayjay","doan"},temp[M];/*填空4*/
  int  n,i;
  printf("\n原始字符串数组为：\n");
  for(i=0;i<N;i++)puts(str[i]);  printf("\n");
  printf("请输入你想要查询的字符串:  ");  gets(temp);
  n=f(str,temp);
  if(n== -1)  printf("\n对不起，没找到!\n");
  else   printf("\n恭喜你，找到了，它是二维数组中第%d个一维数组.\n",n);
}
