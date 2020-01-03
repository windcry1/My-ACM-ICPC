#include<bits/stdc++.h>
#define lowbit(x) x&(-x)
#define ll long long
using namespace std;
int pos[200010],n;
ll a[200010],bit[200010];
set<ll> st;
void edit(int pos){ for(;pos<=n;pos+=lowbit(pos)) bit[pos]++;}
ll query(int pos){ll res=0;for(;pos;pos-=lowbit(pos))res+=bit[pos];return res;}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>n;
	ll ans=0;
	for(int i=1;i<=n;i++) cin>>a[i],pos[a[i]]=i;
	auto it=st.begin();
	for(int i=1;i<=n;i++){
		ans+=query(n)-query(pos[i]);
		ans-=min(query(pos[i]),query(n)-query(pos[i]));
		edit(pos[i]);
		st.insert(pos[i]);
		if(it!=st.end()){
			if(pos[i]<*it&&!(st.size()&1)) it--;
			if(pos[i]>*it&&(st.size()&1)) it++;
		}
		else it=st.begin();
		if(st.size()&1){
			if(pos[i]<=*it) ans+=(*it-pos[i])-query(*it)+query(pos[i]);
			else ans+=(-*it+pos[i])+query(*it)-query(pos[i]);
		}
		else{
			if(pos[i]<=*it) ans+=(*next(it)-pos[i])-query(*next(it))+query(pos[i]);
			else ans+=(pos[i]-*it)-query(pos[i])+query(*it);
		}
		cout<<ans<<" ";
	}
	return 0;
}
