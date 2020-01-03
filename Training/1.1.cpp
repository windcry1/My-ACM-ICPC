#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
long long num;
int n,a[500001],tmp[500001],s[500001];//tmp是临时数组 
void merge(int l,int m,int r)//合并子序列 
{
    int i=l,j=m+1,k=l;
    while(i<=m&&j<=r)
	{
        if(a[i]>a[j])
		{
            tmp[k++]=a[j++];//从小到大排列 
            num+=m-i+1;//只要a[i]>a[j],i~m?都可以构成逆序数
        }
        else tmp[k++]=a[i++];//相等的就直接存放到临时数组
    }
    while(i<=m)
		tmp[k++]=a[i++];//剩余的直接拷贝 
    while(j<=r)
		tmp[k++]=a[j++];
    for(int i=l;i<=r;i++)
        a[i]=tmp[i];//临时数组赋值给a数组
}
void mergesort(int l,int r)//归并排序
{
    if(l<r)
	{
        int mid=(l+r)/2;//分成两部分 
        mergesort(l,mid);//左递归
        mergesort(mid+1,r);//右递归 
        merge(l,mid,r);//合并两部分 
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
