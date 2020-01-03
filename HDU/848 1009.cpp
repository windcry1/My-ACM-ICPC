/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/24/2019 6:33:23 PM
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
int l[26],r[26],cnt[26];
string s,res;
int n;
bool check(char c)
{
	if(n<0)
		return false;
	auto temp=n;
	auto flag=false;//i<tt?true:false
	int sum=0;
	for(auto i=0;i<26;i++)
	{
		if(cnt[i]<l[i])
			return false;
		else if(temp<l[i])
			return false;
		if(r[i]<0) return false;
		if(l[i]>0) temp-=l[i];
		sum+=cnt[i];
		if(i<c-'a'&&r[i]!=0)
			flag=true;
	}
	if(sum==n) return true;
	if(flag&&cnt[c-'a']>=l[c-'a']+1)
		return false;
	return true;
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	while(cin>>s>>n)
	{
		memset(l,0,sizeof(l));
		memset(r,0,sizeof(r));
		memset(cnt,0,sizeof(cnt));//后缀还有多少个 
		res="";
		for(auto i:s) ++cnt[i-'a'];
		for(auto i=0;i<26;i++)
			cin>>l[i]>>r[i];
		for(auto i:s)
		{
			--cnt[i-'a'];--n;
			--l[i-'a'];--r[i-'a'];
			if(check(i))
				res+=i;
			else ++n,++l[i-'a'],++r[i-'a'];
		}
		if(!n) cout<<res<<endl;
		else cout<<-1<<endl;
	}
 	return 0;
}

