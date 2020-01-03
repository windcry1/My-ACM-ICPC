//Author: WindCry1
//Mail: lanceyu120@gmail.com
//Website: https://windcry1.com
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
int dp[1010][1010];
struct node{
	int date;
	int punish;
	bool flag=true;
	bool operator <(const node a)const{
		return this->date<a.date||(this->date==a.date&&this->punish>a.punish);
	}
}x[1010];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		for(int i=0;i<=n;i++)
			x[i].flag=true;
		for(int i=1;i<=n;i++)
			cin>>x[i].date;
		for(int i=1;i<=n;i++)
			cin>>x[i].punish;
		sort(x+1,x+n+1);
		int cnt=1;
		int sum=0;
		for(int i=1;i<=n;i++)
		{
			if(x[i].date>=cnt)
			{
				cnt++;
				continue;
			}
			int p=x[i].punish,t=i;
			for(int j=1;j<i;j++)
				if(p>x[j].punish&&x[j].flag)
				{
					p=x[j].punish;
					t=j;
				}
			sum+=p;
			x[t].flag=false;
		}
		cout<<sum<<endl;
	}
 	return 0;
}

