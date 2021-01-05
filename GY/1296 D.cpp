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
#define ll long long
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
int c[200010],d[200010];
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,a,b,k,res=0;
	cin>>n>>a>>b>>k;
	for(int i=1;i<=n;i++){
		int t;
		cin>>t;
		c[i]=t%(a+b)==0?(a+b):t%(a+b);
		d[i]=ceil((c[i]+a-1)/a-1);
	}
	sort(d+1,d+1+n);
	int ans=0;
	for(int i=1;i<=n;i++){
		ans+=d[i];
		res=i;
		if(ans>k){
		res=i-1;
		break;}
		if(ans==k) {
			break;
		} 
	}
	cout<<res<<endl;
    return 0;
}

