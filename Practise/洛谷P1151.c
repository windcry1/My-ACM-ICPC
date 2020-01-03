#include<stdio.h>
int main()
{
    int K,sub[3],i;
    scanf("%d",&K);
    for(i=10000;i<=30000;i++)
    {
        sub[0]=(int)(i/100);
        sub[1]=(int)((i-(((int)(i/10000))*10000))/10);
        sub[2]=(int)((i-((int)(i/1000))*1000));
        if(sub[0]%K==0 && sub[1]%K==0 && sub[2]%K==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
