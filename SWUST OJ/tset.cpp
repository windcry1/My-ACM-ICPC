#include<stdio.h>
#include<string.h>
main()
{
char zong[100];
int k;
int i;
char zimu[100];
char shuzi[100];
char kongge[100];
char qita[100];
int a=0,b=0,c=0,d=0;
scanf("%[^\n]",zong);
k=strlen(zong);
for(i=0;i<k;i++)
{
if((zong[i]>='A'&&zong[i]<='Z')||(zong[i]>='a'&&zong[i]<='z'))
{
zimu[a]=zong[i];
a++;
}
else if(zong[i]>'0'&&zong[i]<'9')
{
shuzi[b]=zong[i];
b++;
}
else if(zong[i]==' ')
{
kongge[c]=zong[i];
c++;
}
else
{
qita[d]=zong[i];
d++;
}
}
printf("%d %d %d %d\n",a,b,c,d);
}

