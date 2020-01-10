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
using namespace std;
const int INF = 0x3f3f3f3f;
int f[100010];
int find(int x){
	return f[x]==x?x:find(f[x]);
}
void uni(int u,int v){
	if(find(u)!=find(v)){
		f[find(u)]=find(v);
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int m,n;
	while(cin>>m>>n){
		if(m==0&&n==0) break;
		int cnt=0;
		for(int i=0;i<=m;i++){
			f[i]=i;
		}
		for(int i=1;i<=n;i++){
			int k,t,a;
			cin>>k>>t;
			for(int i=1;i<k;i++){
				cin>>a;
				uni(a,t);
			}
		}
		for(int i=0;i<=m;i++){
			if(find(0)==find(i)) cnt++;
		}
		cout<<cnt<<endl;
	}
    return 0;
}
