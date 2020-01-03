//Author:LanceYu
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<iostream>
#include<string>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
#include<complex>
#include<stack>
#include<bitset>
#include<iomanip>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
int MIN=MMAX;
bool vis[10010],flag[10010];
bool isprime(int x)
{
	for(int i=2;i<=sqrt(x)+1;i++)
		if(x%i==0)
			return false;
	return true;
}
int power(int a,int b)
{
	int res=1;
	while(b--)
		res*=a;
	return res;
}
bool bfs(int s,int end)
{
	queue<pair<int,int> > q;
	vis[s]=true;
	q.push(make_pair(s,0));
	while(!q.empty())
	{
		pair<int,int> t=q.front();
		q.pop();
		if(t.first==end)
		{
			cout<<t.second<<endl;
			return true;
		}
		for(int i=0;i<4;i++)
		{
			int p=power(10,i);
			for(int j=0;j<=9;j++)
			{
				if(i==3&&j==0)
					continue;
				if((t.first%(p*10)/p)!=j)
				{
					int temp=t.first;
					temp-=(t.first%(p*10)/p)*p;
					temp+=j*p;
					if(flag[temp]&&!vis[temp])
					{
						q.push(make_pair(temp,t.second+1));
						vis[temp]=true;
					}
				}
			}
		}
	}
	return false;
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;
	cin>>T;
	for(int i=1000;i<=10000;i++)
		if(isprime(i))
			flag[i]=true;
	while(T--)
	{
		memset(vis,false,sizeof(vis));
		int a,b;
		cin>>a>>b;
		if(!bfs(a,b))
			cout<<"Impossible"<<endl;
	}
 	return 0;
}

