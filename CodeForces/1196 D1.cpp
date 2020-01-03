/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/25/2019 12:01:01 AM
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
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string temp;
	int q;
	cin>>q;
	while(q--)
	{
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int ans=INF;
		for(auto p=0;p<3;p++)
		{
			if(p==0) temp="RGB";
			if(p==1) temp="GBR";
			if(p==2) temp="BRG";
			int now=0;
			for(auto i=0;i<k;i++)
				if(s[i]!=temp[i%3])
					now++;
			int res=now;
			for(auto i=k;i<n;i++)
			{
				if(s[i-k]!=temp[(i-k)%3])
					--now;
				if(s[i]!=temp[i%3])
					++now;
				res=min(res,now);
			}
			ans=min(ans,res);
		}
		cout<<ans<<endl;
	}
 	return 0;
}

