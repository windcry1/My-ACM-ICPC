#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<ctime>
#include<iostream>
#include<string>
#include<map>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<iomanip>
#include<bitset>
#include<algorithm>
#define ll long long
using namespace std;
pair<ll,ll> a[201010];
bool cmp(pair<ll,ll> a,pair<ll,ll> b){
	return a.first<b.first||a.first==b.first&&a.second>b.second;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		memset(a,0,sizeof a);
		int n;
		cin>>n;
		int cnt=0;
		for(int i=1;i<=n;i++){
			cin>>a[cnt].first;
			a[cnt++].second=1;
			cin>>a[cnt].first;
			a[cnt++].second=-1;
		}
		sort(a,a+cnt,cmp);
		int res=0,ans=0;
		for(int i=0;i<cnt;i++){
			res+=a[i].second;
			ans=max(ans,res);
		}
		cout<<ans<<endl;
	}	
    return 0;
}
