#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#define ll long long
using namespace std;
const ll mod=1000000007;
vector<ll> prime[110];
map<ll,ll> p[110];
int a[110];
int main(){
	ll n;cin>>n;
	ll res=0;
	for(int i=0;i<n;i++) {
		cin>>a[i];
		ll t=a[i];
		for(int j=2;j<=a[i];j++){
			while(t%j==0){
				prime[i].push_back(j);
				t/=j;
			}
		}
		if(t!=1) prime[i].push_back(t);
		for(int j=0;j<(int)prime[i].size();j++)
			p[i][prime[i][j]]++;
	}
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++){
			for(map<ll,ll>::iterator it=p[i].begin();it!=p[i].end();it++){
				if(p[j].count(it->first)) res=(res+it->first*min(p[j][it->first],it->second)%mod)%mod;
			}
		}
	cout<<res<<endl;
	return 0;
}


