/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/8/2019 7:34:30 PM
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
		string s;cin>>s;
		bool flag=false;
		int cnt=0;
		stack<string> sta;
		for(auto i=s.end()-1;i>=s.begin();i--)
		{
			if((*i)=='1')
			{
				if(flag)
				{
					sta.push(s.substr(i-s.begin()+1,cnt));
					//cout<<s.substr(i-s.begin()+1,cnt)<<" ";
					cnt=0;
					flag=false;
				}
				++cnt;
				continue;
			}
			++cnt;
			flag=true;
		}
		sta.push(s.substr(0,cnt));
		flag=false;
		while(!sta.empty())
		{
			if(!flag)
				cout<<sta.top(),flag=true;
			else cout<<" "<<sta.top();
			sta.pop();
		}
		cout<<endl;
	}
	return 0;
}

