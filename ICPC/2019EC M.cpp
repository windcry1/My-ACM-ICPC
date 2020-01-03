#include<bits/stdc++.h>
#define DEBUG(x) cout<<#x<<" "<<x<<endl;
#define ll long long 
#define ull unsigned long long
using namespace std;
ll a[100010],b[100010];
bool flag[100010];
int main(){
	//ifstream cin(".\\2019ECM-test.in");
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll n;cin>>n;for(ll i=1;i<=n;i++) cin>>a[i];for(ll i=1;i<=n;i++) cin>>b[i];
	ll ans=0;
	for(ll i=2;i<=n;i++){
		if(flag[i]) continue;
		vector<ll> v;
		v.push_back(i);
		for(ll j=i*i;j<=n;j*=i)
			v.push_back(j),flag[j]=true;
		ll p=0;
		for(ll state=0;state<(1<<v.size());state++){
			ll res=0;
			for(ll l=0;l<v.size();l++){
				ll temp=1<<l;
				if(state&temp){
					res+=a[v[l]];
					for(ll j=(l+1+l+1);j<=v.size();j+=l+1){
						if((1<<(j-1))&state){
							res-=b[v[j-1]];
						}
					}
				}
			}
			p=max(p,res);
		}
		ans+=p;
	}
	cout<<ans+a[1]<<endl;
	return 0;
}

