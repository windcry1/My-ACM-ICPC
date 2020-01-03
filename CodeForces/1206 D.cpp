/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/18/2019 11:34:29 PM
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
typedef pair<ll,ll> pll;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const ll INF=0xfffffff;
const int mod=1e9+7;
vector<ll> v[4010];
ll dfn[4010];
ll ans=INF;
ll a[100010];
void tarjan(int x,int sd)
{
    dfn[x]=sd;
    for(int i=0;i<v[x].size();i++)
    {
        if(!dfn[v[x][i]])
            tarjan(v[x][i],sd+1);
        else
        {
            if(sd-dfn[v[x][i]]+1>=3)
                ans=min(sd-dfn[v[x][i]]+1,ans);
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
	int n;cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n,greater<ll>());
	int m=min(n,4000);
	for(int i=0;i<m;i++)
		for(int j=i+1;j<m;j++)
			cout<<a[i]<<" & "<<a[j]<<" : "<<(a[i]&a[j])<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=i+1;j<m;j++){
			if(a[i]&a[j]){
				v[i].push_back(j);
				v[j].push_back(i);
			}
		}
		cout<<"v["<<i<<"] : ";
		for(auto j:v[i])
			cout<<j<<" ";
		cout<<endl;
	}
	for(int i=0;i<m;i++)
		if(!dfn[i])
			tarjan(i,1);
	cout<<(ans==INF?-1:ans)<<endl;
	return 0;
}

