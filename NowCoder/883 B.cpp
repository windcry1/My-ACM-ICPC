/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/25/2019 8:16:47 PM
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
const int mod=1e9+7;
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	string s;
	cin>>n>>s;
	int cnt1=0,cnt2=0;
	vector<int> v;
	for(auto i=s.begin();i!=s.end();i++)
		if((*i)=='0') cnt1++;
		else cnt2++,v.push_back(i-s.begin());
	int res2=min(cnt1,cnt2)*2;
	int pre=-1,cnt=0,res=0;
	for(auto i=v.begin();i!=v.end();i++)
	{
		if(pre==-1)
		{
			pre=*i;
			cnt++;
			continue;
		}
		cnt++;
		int total=*i-pre+1;
		if(total-cnt>cnt)
			pre=i-v.begin(),cnt=1;
		if(total-cnt==cnt)
			res=max(res,cnt);
	}
	res*=2;
	cout<<res<<" "<<res2<<endl;
 	return 0;
}

