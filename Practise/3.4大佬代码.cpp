#include <stdio.h>

int num[21],mark[21],n;
int prime_num[12] = {2,3,5,7,11,13,17,19,23,29,31,37};

//�ж��Ƿ����������Ƿ���1�����Ƿ���0
int is_prime(int a)
{
    for(int i = 0; i < 12;i++)
    if(a==prime_num[i])return 1;
    return 0;
}
void print_num()
{
    for(int i = 1; i < n;i++)
    printf("%d ",num[i]);
    printf("%d",num[n]);
}

int dfs(int pre,int post,int flag)
{
    //��������ϣ�ֱ�ӷ���
    if(!is_prime(pre+post))
    return 0;
    num[flag] = post;
    if(flag==n&&is_prime(post+1))
    {
        print_num();
        printf("\n");
        return 1;
    }
    //ʹ�ù���������־ͱ��Ϊ0
    mark[post] = 0;
    for(int i = 2;i<=n;i++)
    if(mark[i]!=0 && dfs(post,i,flag+1))break;
    //���λ�ָ�ԭ״
    mark[post] = 1;
    return 0;
}

int main()
{
    int count;
    count = 1;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i = 1; i <= n; i++)
        mark[i] = i;
        num[1] = 1;
        printf("Case %d:\n",count++);
        if(n==1)printf("1\n");
        for(int i = 2;i<=n;i++)
        dfs(1,i,2);
        printf("\n");
    }
    return 0;
}
