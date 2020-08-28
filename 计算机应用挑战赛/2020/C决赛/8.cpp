#include <stdio.h>
int main()
{
 int a[4][4]={{0,1,2,3},{4,5,6,7},{8,9,10,11}};
    int result=0;
    int i,j;
    for(i=0;i<3;i++)
  for(j=0;j<3;j++)
   if(i+j==4)
    result=result+a[i][j];
    printf("%d\n",result);
}
