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
	int n,m,a[100001];
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		int i;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		int sum=0;i=-1;
		int count=1;
		while(i!=(n-1))
		{
			i++;
			sum+=a[i];
			if(sum>=m&&i!=n-1)
			{
				count++;
				sum=0;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}

