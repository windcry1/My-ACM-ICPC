#include<stdio.h>
int main()
{
    int i,n,I,temp=1,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(I=1;I<=i;I++)
        {
            temp*=I;
        }
        sum+=temp;
        temp=1; 
    }
    printf("%d",sum);
    return 0;
}
