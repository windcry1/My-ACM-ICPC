//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<iosfwd>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<array>
#include<valarray>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
//const double e=2.718281828;
const double PI=3.141592653589793;
const int MMAX=2147483647;
const int mod=1e9+7;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;

int main()
{
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m,T;
	int a[4][1001];
	char s[51][1001];
	char book[5]={'A','C','G','T'};
	scanf("%d",&T);
	while(T--)
	{
		memset(a,0,sizeof(a));
		scanf("%d%d",&m,&n);
		for(int i=0;i<m;i++)
			scanf("%s",s[i]);
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(s[i][j]=='A')
					a[0][j]++;
				else if(s[i][j]=='C')
					a[1][j]++;
				else if(s[i][j]=='G')
					a[2][j]++;
				else if(s[i][j]=='T')
					a[3][j]++;
			}
		}
		char te[1002];
		for(int i=0;i<n;i++)
		{
			int MAX=0,t=0;
			for(int j=0;j<4;j++)
			{
				if(MAX<a[j][i])
				{
					MAX=a[j][i];
					t=j;
				}
			}
			te[i]=book[t];
		}
		te[n]='\0';
		int sum=0;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(s[i][j]!=te[j])
					sum++;
			}
		}
		printf("%s\n%d\n",te,sum);
	}
	return 0;
}

