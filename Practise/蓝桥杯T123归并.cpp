#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
long long num;
int n,a[500001],tmp[500001],na[500001],ntmp[500001];//tmp����ʱ���� 
void merge(int l,int m,int r)//�ϲ������� 
{
    int i=l,j=m+1,k=l;
    while(i<=m&&j<=r)
	{
        if(a[i]>a[j])
		{
            tmp[k]=a[j];//��С��������
            ntmp[k]=na[j]+1;
            k++;
            j++;
        }
        else 
		{
			tmp[k]=a[i];//��ȵľ�ֱ�Ӵ�ŵ���ʱ����
			ntmp[k]=na[i]+1;
			k++;
			i++;
		}
    }
    while(i<=m)
    {
		tmp[k]=a[i];//ʣ���ֱ�ӿ���
		ntmp[k]=na[i]+1;
		k++;
		i++;
	}
    while(j<=r)
    {
		tmp[k]=a[j];
		ntmp[k]=na[j]+1;
		k++;
		j++;
	}
    for(int i=l;i<=r;i++)
        a[i]=tmp[i];//��ʱ���鸳ֵ��a����
    for(int i=l;i<=r;i++)
    	na[i]=ntmp[i];
}
void mergesort(int l,int r)//�鲢����
{
    if(l<r)
	{
        int mid=(l+r)/2;//�ֳ������� 
        mergesort(l,mid);//��ݹ�
        mergesort(mid+1,r);//�ҵݹ� 
        merge(l,mid,r);//�ϲ������� 
    }
}
int main()
{
    while(scanf("%d",&n)!=EOF)
	{
		memset(na,0,sizeof(na));
		memset(ntmp,0,sizeof(ntmp));
		if(n==0)
			return 0; 
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        num=0;
        mergesort(0,n-1);
        for(int i=0;i<n;i++)
		{
			num+=na[i];
		}
        printf("%lld\n",num);
    }
    return 0;
}
