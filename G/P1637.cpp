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
int s[300010],a[300010],c[60010];
int f[4][300010];
int n,m; 
int val(int x){
	return lower_bound(s+1,s+1+m,x)-s;
}
int lowbit(int x){
	return (-x)&x;
}
void edit(int pos,int val){
	for(int i=pos;i<=n;i+=lowbit(i)){
		c[i]+=val;
	}
}
int query(int pos){
	int res=0;
	for(int i=pos;i>=1;i-=lowbit(i)){
		res+=c[i];
	}
	return res;
}
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int n,m;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i],s[i]=a[i];
	sort(s+1,s+1+n);
	m=unique(s+1,s+1+n)-s-1;
	for(int i=1;i<=n;i++) f[1][i]=1,a[i]=val(a[i]);
	for(int i=2;i<=3;i++){
		memset(c,0,sizeof c);
		for(int j=1;j<=n;j++){
			f[i][j]=query(a[j]-1);
			edit(a[j],f[i-1][j]);
		}
	}
	int sum=0;
	for(int i=1;i<=n;i++) sum+=f[3][i];
	cout<<sum<<endl;
    return 0;
}

