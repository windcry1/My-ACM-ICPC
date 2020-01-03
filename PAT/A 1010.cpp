/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/27/2019 7:01:20 PM
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
ll pow(ll a,ll b)
{
	ll res=1;
	while(b--) res*=a;
	return res;
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string n1,n2;
	int tag,radix;
	cin>>n1>>n2>>tag>>radix;
	if(tag==2) swap(n1,n2);
	ll cnt=0,res=0;
	while(n1!="")
	{
		auto c=n1.back();n1.pop_back();
		if(isdigit(c)) res+=1LL*(c-'0')*pow(radix,cnt);
		else res+=1LL*(c-'a'+10)*pow(radix,cnt);
		cnt++;
	}
	ll idx,flag=0;
	auto c=*max_element(n2.begin(),n2.end());
	ll l=(isdigit(c)?1LL*(c-'0'):1LL*(c-'a'+10))+1,r=max(l,res);
	while(l<=r)
	{
		ll mid=(l+r)>>1;
		string temp=n2;
		ll ans=0;
		cnt=0;
		while(temp!="")
		{
			auto c=temp.back();temp.pop_back();
			if(isdigit(c)) ans+=1LL*(c-'0')*pow(mid,cnt);
			else ans+=1LL*(c-'a'+10)*pow(mid,cnt);
			++cnt;
		}
		if(ans<0||ans>res)
			r=mid-1;
		else if(ans==res)
		{
			flag=1;
			idx=mid;
			break;
		}
		else l=mid+1;
	}
	cout<<(flag?to_string(idx):"Impossible")<<endl;
	return 0;
}

