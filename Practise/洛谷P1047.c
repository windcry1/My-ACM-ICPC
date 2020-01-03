#include <stdio.h>
int main()
{
    int i,j,L,num1,num2,a[10001],M,sum=0;
    scanf("%d %d",&L,&M);
    for(i=0;i<=L;i++)
        a[i]=1;
    for(i=1;i<=M;i++)
    {
            scanf("%d %d",&num1,&num2);
        for(j=0;j<=L;j++)
        {
            if(j>=num1 && j<=num2) 
            {
            a[j]=0;
            }
        }
    }
    for(i=0;i<=L;i++)
    {
        sum+=a[i];
    }
    printf("%d\n",sum);
     return 0;
}
