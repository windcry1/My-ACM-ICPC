/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/4/2019 5:51:11 PM
*************************************************************************/
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
#include<list>
#if __cplusplus >= 201103L
#include<unordered_map>
#include<unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int,int> pii;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
char pfix[21],sfix[21];
string s[21];
int vis[21];//maximum 2
int n;
int MAX; 
void dfs(int x,int leng)
{
	MAX=max(MAX,leng);
	for(int i=0;i<n;i++)
	{
		if(vis[i]<2)
		{
			vis[i]++;
			int f=0;
			auto j=s[x].rbegin();
			auto k=s[i].begin();
			string t1,t2,pre1,pre2;
			vector<int> v;
			while(j!=s[x].rend()&&k!=s[i].end())
			{
				pre1=t1,pre2=t2;
				reverse(t1.begin(),t1.end());
				t1+=*j;
				reverse(t1.begin(),t1.end());
				t2+=*k;
				if(pre1==pre2&&pre1!="") v.push_back(pre1.size());
				j++,k++;
			}
			sort(v.begin(),v.end());
			if(f==1||v.empty())
			{
				vis[i]--;
				continue;
			}
			dfs(i,leng+s[i].length()-v[0]);
			vis[i]--;
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>s[i];
	char c;
	cin>>c;
	for(int i=0;i<n;i++)
	{
		if(s[i][0]==c)
		{
			memset(vis,0,sizeof vis);
			vis[i]=1;
			dfs(i,s[i].length());
		}
	}
	cout<<MAX<<endl;
	return 0;
}

