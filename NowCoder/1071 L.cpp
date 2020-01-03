/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/4/2019 3:27:17 PM
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
#define xiaojiejiewoaini ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int,int> pii;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
inline char _(int __)
{
	if(__>=0&&__<=9) return __+'0';
	if(__>=10&&__<=15) return __+'A'-10;
}
inline int __(char _)
{
	if(_>='0'&&_<='9') return _-'0';
	if(_>='A'&&_<='F') return _-'A'+10;
}
string add(string a,int tag)
{
	string res;
	int pre=0;
	auto i=a.rbegin();auto j=a.begin();
	while(true)
	{
		int t=pre;
		int flag=0;
		if(i!=a.rend())
			t+=__(*i),flag=1,i++;
		if(j!=a.end())
			t+=__(*j),flag=1,j++;
		//if(t==1) res+=_(t);
		if(!flag)
		{
			if(t==1)res+=_(t);
			break;
		}
		pre=0;
		while(t>=tag) ++pre,t-=tag;
		res+=_(t);
	}
	reverse(res.begin(),res.end());
	return res;
}
int main()
{
	xiaojiejiewoaini
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,T=30;
	string m;
	cin>>n>>m;
	for(int i=0;i<=T;i++)
	{
		string temp(m.rbegin(),m.rend());
		if(temp==m)
		{
			cout<<"STEP="<<i<<endl;
			return 0;
		}
		m=add(m,n);
	}
	cout<<"Impossible!"<<endl;
	return 0;
}

