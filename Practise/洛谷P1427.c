#include<stdio.h>
int main()
{
    int a[200],i,j;
    for(i=0;;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        break;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d ",a[j]);
    }
    return 0;
}
