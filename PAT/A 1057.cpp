/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/7/2019 4:20:24 PM
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
set<int> st;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;cin>>n;
	vector<int> v;
	while(n--)
	{
		string s;cin>>s;
		if(s=="Pop")
		{
			if(v.empty())
				cout<<"Invalid"<<endl;
			else cout<<v.back()<<endl,st.erase(st.find(v.back())),v.pop_back();
		}
		if(s=="Push")
		{
			int t;cin>>t;
			v.push_back(t),st.insert(t);
		}
		if(s=="PeekMedian")
		{
			if(st.empty())
				cout<<"Invalid"<<endl;
			int cnt=0;
			for(auto i:st)
			{
				++cnt;
				if(cnt==(st.size()+1)/2)
				{
					cout<<i<<endl;
					break;
				}
			}
		}
	}
	return 0;
}

