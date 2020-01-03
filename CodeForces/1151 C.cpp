/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/17/2019 9:34:31 PM
*************************************************************************/
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <complex>
#include <stack>
#include <bitset>
#include <iomanip>
#include <list>
#include <sstream>
#include <fstream>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
#define ull unsigned long long
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int MMAX = 0x7fffffff;
const int INF = 0x3f3f3f3f;
const ll mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ostream& operator <<(ostream &out, pii &p){
	return out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	return in>>p.first>>p.second;
}
ll qmi(ll a,ll b){
	ll res=1;
	while(b){
		if(b&1) res=res*a%mod;
		a=a*a%mod;
		b>>=1;
	}
	return res;
}
ll getres(int pos,ll x){
	x -= (1LL<<pos)-1;
	ll res=0;
	ll odd=0,even=0;
	for(int i=0;i<pos;i++){
		(i&1)?even+=1LL<<i:odd+=1LL<<i;
	}
	DEBUG(even);
	DEBUG(odd);
	DEBUG(pos);
	if(pos&1){
		//this is even array;
		ll start = even<<1+2,end=(x-1)*2+start;
		if((start+end)&1){
			ll t1=(start+end)%mod,t2=((start+end+1)>>1)%mod;
			res+=t1*t2%mod;
		}
		else{
			ll t1=((start+end)>>1)%mod,t2=(start+end+1)%mod;
			res+=t1*t2%mod;
		}
		start=2,end=even<<1;
		if(end>=start){
			if((start+end)&1){
				ll t1=(start+end)%mod,t2=((start+end+1)>>1)%mod;
				res+=t1*t2%mod;
			}
			else{
				ll t1=((start+end)>>1)%mod,t2=(start+end+1)%mod;
				res+=t1*t2%mod;
			}
		}
		start=1,end=odd<<1-1;
		if(end>=start){
			if((start+end)&1){
				ll t1=(start+end)%mod,t2=((start+end+1)>>1)%mod;
				res+=t1*t2%mod;
			}
			else{
				ll t1=((start+end)>>1)%mod,t2=(start+end+1)%mod;
				res+=t1*t2%mod;
			}
		}
	}
	else{
		ll start = odd<<1+1,end=(x-1)*2+start;
		if((start+end)&1){
			ll t=((start+end)>>1)%mod;
			res+=t*(x%mod)%mod;
		}
		else{
			ll t1=((start+end)>>1)%mod;
			res+=t1*(x%mod)%mod;
		}
		start=2,end=even<<1;
		if(end>=start){
			if((start+end)&1){
				ll t1=(start+end)%mod,t2=((start+end+1)>>1)%mod;
				res+=t1*t2%mod;
			}
			else{
				ll t1=((start+end)>>1)%mod,t2=(start+end+1)%mod;
				res+=t1*t2%mod;
			}
		}
		start=1,end=odd<<1-1;
		if(end>=start){
			if((start+end)&1){
				ll t1=(start+end)%mod,t2=((start+end+1)>>1)%mod;
				res+=t1*t2%mod;
			}
			else{
				ll t1=((start+end)>>1)%mod,t2=(start+end+1)%mod;
				res+=t1*t2%mod;
			}
		}
	}
	return res;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	ll l,r;cin>>l>>r;
	int posl,posr;
	for(int i=62;~i;i--){
		ll temp = (1<<i)-1;
		//DEBUG(temp); 
		if(temp>=l) posl=i-1;
		if(temp>=r) posr=i-1;
	}
	//pos even -> odd array 
	//pos odd -> even array
	ll L=getres(posl,l),R=getres(posr,r);
	cout<<L<<" "<<R<<endl; 
	cout<<(R-L+mod)%mod<<endl;
	return 0;
}

