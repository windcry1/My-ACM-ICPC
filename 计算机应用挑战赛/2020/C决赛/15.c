#include  <stdio.h>
#include  <string.h>
#define   N   10
#define   M   10
int f(char str[][M],char *t)/*���1*/
{  int  i;
   for(i=0; i<N ; i++)
     if(strcmp(str[i],t)==0) return i ;/*���2*/
    return -1;/*���3*/
}
main()
{ char  str[N][M]={"jony","lucy","abbe","lily","rebeca","tomme","osca","tomas","jayjay","doan"},temp[M];/*���4*/
  int  n,i;
  printf("\nԭʼ�ַ�������Ϊ��\n");
  for(i=0;i<N;i++)puts(str[i]);  printf("\n");
  printf("����������Ҫ��ѯ���ַ���:  ");  gets(temp);
  n=f(str,temp);
  if(n== -1)  printf("\n�Բ���û�ҵ�!\n");
  else   printf("\n��ϲ�㣬�ҵ��ˣ����Ƕ�ά�����е�%d��һά����.\n",n);
}
