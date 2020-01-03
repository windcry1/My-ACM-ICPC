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
#include<list>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
vector<char> v;
multiset<char> mst;
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
		v.clear();
		string s,t,p;
		cin>>s>>t>>p;
		int cnt=0;
		for(auto i:t)
		{
			if(cnt<s.length()&&i==s[cnt])
				cnt++;
			else v.push_back(i);
		}
		if(cnt!=s.length())
		{
			cout<<"NO"<<endl;
			continue;
		}
		cnt=0;
		mst.clear();
		mst.insert(p.begin(),p.end()); 
		for(auto i:v)
		{
			auto it=mst.find(i);
			if(it!=mst.end())
			{
				mst.erase(it);
				cnt++;
			}
			else break;
		}
		cout<<(cnt==v.size()?"YES":"NO")<<endl;
	}
 	return 0;
}

