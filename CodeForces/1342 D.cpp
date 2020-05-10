#include<bits/stdc++.h>
#define ll long long
#define lowbit(x) x&(-x)
using namespace std; 
ll a[200010],c[200010],bit[200010];
void edit(int pos){
	for(;pos<=200000;pos+=lowbit(pos)) bit[pos]++;
}
ll query(int pos){
	ll res=0;
	for(;pos;pos-=lowbit(pos)) res+=bit[pos];
	return res;
}
vector<vector<int> > res;
vector<int> v;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int n,k;cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=k;i++) cin>>c[i];
	sort(a+1,a+1+n,greater<int>());
	for(int i=1;i<=n;i++){
		ll greater=i-1-query(a[i]-1);
		edit(a[i]);
		if(res.size()*c[a[i]]>greater){
			v.push_back(a[i]);
			continue;
		}
		vector<int> tmp;
		tmp.push_back(a[i]);
		res.push_back(tmp);
	}
	for(int i=0;i<(int)v.size();i++){
		res[i%res.size()].push_back(v[i]);
	}
	cout<<res.size()<<endl;
	for(auto i:res){
		cout<<i.size();
		for(auto j:i) cout<<" "<<j;
		cout<<endl;
	}
	return 0;
}

