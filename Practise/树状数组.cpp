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
int A[100100],BIT[100010];
int MAX_N; 
int lowbit(int x)
{
	return x&(-x);
}
void add(int i,int delta)//修改 
{
	for(int j=i;j<=MAX_N;j+=lowbit(j))//把对应节点全部加上指定的值 
		BIT[j]+=delta;
}
void sub(int i,int delta)//修改 
{
	for(int j=i;j<=MAX_N;j+=lowbit(j))//把对应节点全部加上指定的值 
		BIT[j]-=delta;
}
void build()//构造 
{
    for (int i=1;i<=MAX_N;i++)
    {
        BIT[i]=A[i-1];
        for (int j=i-2;j>=i-lowbit(i);j--)
            BIT[i]+=A[j];
    }
}
int sum(int k)//求和 
{
    int ans=0;
    for(int i=k;i>0;i-=lowbit(i))
        ans+=BIT[i];
    return ans;
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;
	int times=0;
	cin>>T;
	{
		cout<<"Case "<<++times<<":\n";
		cin>>MAX_N;
		for(int i=0;i<MAX_N;i++)
			cin>>A[i];
		build ();
		string s;
		int times=0;
		while(cin>>s)
		{
			if(s=="Query")
			{
				int a,b;
				cin>>a>>b;
				cout<<sum(b)-sum(a-1)<<endl;
			}
			if(s=="Add")
			{
				int a,b;
				cin>>a>>b;
				add(a,b);
			}
			if(s=="Sub")
			{
				int a,b;
				cin>>a>>b;
				sub(a,b);
			}
			if(s=="End")
				break;
		}
	}
 	return 0;
}

