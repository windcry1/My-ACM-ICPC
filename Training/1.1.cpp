#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
long long num;
int n,a[500001],tmp[500001],s[500001];//tmp����ʱ���� 
void merge(int l,int m,int r)//�ϲ������� 
{
    int i=l,j=m+1,k=l;
    while(i<=m&&j<=r)
	{
        if(a[i]>a[j])
		{
            tmp[k++]=a[j++];//��С�������� 
            num+=m-i+1;//ֻҪa[i]>a[j],i~m?�����Թ���������
        }
        else tmp[k++]=a[i++];//��ȵľ�ֱ�Ӵ�ŵ���ʱ����
    }
    while(i<=m)
		tmp[k++]=a[i++];//ʣ���ֱ�ӿ��� 
    while(j<=r)
		tmp[k++]=a[j++];
    for(int i=l;i<=r;i++)
        a[i]=tmp[i];//��ʱ���鸳ֵ��a����
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
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
    while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
			return 0; 
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        num=0;
        mergesort(0,n-1);
        printf("%lld\n",num);
    }
    return 0;
}
