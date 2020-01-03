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
ll big_number(string s,ll m){
    ll num=0;
    for(int i=0;s[i]!='\0';i++){
        num=num*10+(s[i]-'0');
        num%=m;
    }
    return num;
}
ll quick_pow(ll x,ll y){
    ll ans=1;
    while(y){
        if(y&1) ans=(ans*x)%mod;
        x=(x*x)%mod;
        y=y/2;
    }
    return ans;
} 
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;
	while(cin>>s)
	{
		int flag=0;
		if((*(s.end()-1)-'0')%2) flag=1;
		ll num=big_number(s,mod-1);
		ll da=quick_pow(2,num-1+mod-1);
		cout<<(da*(da+1))%mod<<endl;
	}
 	return 0;
}

