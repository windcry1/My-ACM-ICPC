//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<iosfwd>
#include<sstream>
#include<fstream>
#include<cwchar>
#include<iomanip>
#include<ostream>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<valarray>
#include<bitset>
#include<iterator>
#define ll long long
using namespace std;
const double clf=1e-8;
//const double e=2.718281828;
const double PI=3.141592653589793;
const int MMAX=2147483647;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
int main()
{
	int a[1001],b[1001],c[1001];
	int n,m,i,j,k;
	while(printf("请输入集合A的个数和集合B的个数,请用空格隔开：\n"),scanf("%d%d",&n,&m)!=EOF)
	{
		memset(c,MMAX,sizeof(c));
		printf("请输入集合A，元素间用空格隔开：\n");
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		printf("请输入集合B，元素间用空格隔开：\n");
		for(i=0;i<m;i++)
			scanf("%d",&b[i]);
		k=0;
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				if(a[i]==b[j])
					c[k++]=a[i];
		printf("A与B的交集为：\n");
		if(k==0)
			printf("空集\n");
		else
		{
			printf("{");
			for(i=0;i<k;i++)
			{
				if(i!=k-1)
					printf("%d,",c[i]);
				if(i==k-1)
					printf("%d",c[i]);	
			}
			printf("}\n");
		}
		k=n;
		for(i=0;i<n;i++)
			c[i]=a[i];
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				if(b[i]==c[j])
					break;
			if(j==n)
				c[k++]=b[i];
		}
		printf("A与B的并集为：\n{");
		for(i=0;i<k;i++)
		{
			if(i!=k-1)
				printf("%d,",c[i]);
			if(i==k-1)
				printf("%d",c[i]);
		}
		printf("}\n");
		for(i=0;i<n;i++)
			c[i]=a[i];
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(b[i]==c[j])
				{
					for(k=j;k<n;k++)
						c[k]=c[k+1];
						n--;
					break;
				}
			}
		}
		printf("A-B的结果为：\n");
		if(n<=0)
			printf("空集\n");
		else
		{
			printf("{");
			for(i=0;i<n;i++)
			{
				if(i!=n-1)
					printf("%d,",c[i]);
				if(i==n-1)
					printf("%d",c[i]);
			}
			printf("}\n");
		}
		system("pause");
	}
	return 0;
}

