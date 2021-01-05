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
#include<set>
#include<vector>
#include<iomanip>
#include<bitset>
#include<algorithm>
#define ll long long
using namespace std;
ll a[100010],pre[100010];
int main(){
	ios::sync_with_stdio(false);
	ll n;cin>>n;
	ll sum=0;
	for(int i=1;i<=n;i++) cin>>a[i],sum+=a[i];
	ll m=*max_element(a+1,a+1+n);
	sort(a+1,a+n+1);
	ll l=m,r=1e10;
	while(l<=r){
		ll mid=(l+r)/2;
		if(n*mid-sum<mid) l=mid+1;
		else r=mid-1;
	}
	cout<<l<<endl;
    return 0;
}

