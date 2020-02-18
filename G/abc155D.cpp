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
#include<list>
#include<bitset>
#include<sstream>
#include<fstream>
#include<complex>
#include<algorithm>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define int long long
#define ll long long
using namespace std;
const int INF = 0x3f3f3f3f;
//int csp=1e-10;
int a[200010]; 
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n);
	int l=-1e18,r=1e18;
	while(l+1!=r){
		int mid=(l+r)/2;
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(a[i]<0){
				int l1=i,r1=n+1;
				while(l1+1!=r1){
					int mmid=(l1+r1)/2;
					if(a[i]*a[mmid]<=mid) r1=mmid;
					else l1=mmid; 
				}
				cnt+=n+1-r1;
			}
			else{
				int l1=i,r1=n+1;
				while(l1+1!=r1){
					int mmid=(l1+r1)/2;
					if(a[i]*a[mmid]<=mid) l1=mmid;
					else r1=mmid;
				}
				cnt+=l1-i;
			}
		//	cout<<cnt<<endl;
		}
		//cout<<cnt<<endl;
		if(cnt<k) l=mid;
		else r=mid;
	}
	cout<<r<<endl;
    return 0;
}

