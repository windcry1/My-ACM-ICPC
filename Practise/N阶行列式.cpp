#define N 4
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int i,j,m,n,s,t,k=1;
double a[N][N],f=1,c,x,sn;
for (i=0;i<N;i++)
for (j=0;j<N;j++)
scanf ("%lf",&a[i][j]);
for (i=0,j=0;i<N&&j<N;i++,j++)
{
if (a[i][j]==0)
{
for (m=i;a[m][j]==0;m++);
if (m==N)
{
sn=0;
printf("detA=%lf\n",sn);
exit(0);
}
else
for (n=j;n<N;n++)
{
c=a[i][n];
a[i][n]=a[m][n];
a[m][n]=c;
}
k*=(-1);
}
for (s=N-1;s>i;s--)
{
x=a[s][j];
for (t=j;t<N;t++)
a[s][t]-=a[i][t]*(x/a[i][j]);
}
}
for (i=0;i<N;i++)
f*=a[i][i];
sn=k*f;
printf ("detA=%lf\n",sn);
} 
