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
ll a[100010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		ll m,n;
		cin>>m>>n;
		for(int i=1;i<=m;i++){
			cin>>a[i];
		}
		ll cnt=0,Max=0,num=0;
		for(ll i=1;i<=m;i++){
			 cnt+=a[i]; 
			 Max=max(Max,a[i]);
			 num++;
			 if(cnt>n) {
			 	break;
			 }
			}
		if(num==m&&cnt<=n) cout<<0<<endl;
		else {
			if(n-(cnt-Max)>=a[num]&&a[num]!=Max||n-(cnt-Max)>=a[num+1]&&a[num]==Max) {
				for(ll i=1;i<=m;i++){
					if(a[i]==Max) {
					cout<<i<<endl;break;}
				}
			}
			else cout<<0<<endl;
			}
		}	
    return 0;
}
