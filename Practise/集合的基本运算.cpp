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
	while(printf("�����뼯��A�ĸ����ͼ���B�ĸ���,���ÿո������\n"),scanf("%d%d",&n,&m)!=EOF)
	{
		memset(c,MMAX,sizeof(c));
		printf("�����뼯��A��Ԫ�ؼ��ÿո������\n");
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		printf("�����뼯��B��Ԫ�ؼ��ÿո������\n");
		for(i=0;i<m;i++)
			scanf("%d",&b[i]);
		k=0;
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				if(a[i]==b[j])
					c[k++]=a[i];
		printf("A��B�Ľ���Ϊ��\n");
		if(k==0)
			printf("�ռ�\n");
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
		printf("A��B�Ĳ���Ϊ��\n{");
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
		printf("A-B�Ľ��Ϊ��\n");
		if(n<=0)
			printf("�ռ�\n");
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

