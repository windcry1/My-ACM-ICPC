/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/17/2019 6:53:29 PM
*************************************************************************/
#pragma GCC optimize(3)
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
const int INF=0xfffffff;
const int mod=1e9+7;
string str[11];
int n,ans;
bool flag[11],vis[11];
vector<int> v;
set<string> st;
string Manacher(string s) {
    // Insert '#'
    string t = "$#";
    for (int i = 0; i < s.size(); ++i) {
        t += s[i];
        t += "#";
    }
    // Process t
    vector<int> p(t.size(), 0);
    int mx = 0, id = 0, resLen = 0, resCenter = 0;
    for (int i = 1; i < t.size(); ++i) {
        p[i] = mx > i ? min(p[2 * id - i], mx - i) : 1;
        while (t[i + p[i]] == t[i - p[i]]) ++p[i];
        if (mx < i + p[i]) {
            mx = i + p[i];
            id = i;
        }
        if (resLen < p[i]) {
            resLen = p[i];
            resCenter = i;
        }
    }
    return s.substr((resCenter - resLen) / 2, resLen - 1);
}
void dfs(string temp)
{
	if(v.size()!=1&&temp!=""&&Manacher(temp)==temp&&st.find(temp)==st.end())
	{
		int p=pow(2,v.size()-1);
		for(auto i:v)
			if(flag[i])
				p<<=1;
		ans+=p;
		st.insert(temp);
		//cout<<temp<<" "<<p<<endl;
	}
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			vis[i]=true;
			v.push_back(i);
			dfs(temp+str[i]);
			v.pop_back();
			vis[i]=false;
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
	int T;cin>>T;
	while(T--)
	{
		memset(flag,false,sizeof flag);
		memset(vis,false,sizeof vis);
		v.clear();
		st.clear();
		ans=0;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>str[i];
			if(Manacher(str[i])==str[i])
				flag[i]=true,ans+=2;
		}
		dfs("");
		cout<<ans<<endl;
	}
	return 0;
}

