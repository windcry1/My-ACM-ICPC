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
int t,k;
bool vis[100];
int a[100];
bool prime(int n){
	bool flag=1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) flag=0;
	}
	return flag;
}
int res=0;
void dfs(int pos,int sum,int k){
	if(pos>t) {
		if(k==0) res+=prime(sum);
		return;
	}
	dfs(pos+1,sum+a[pos],k-1);
	dfs(pos+1,sum,k);
} 
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>t>>k;
	for(int i=1;i<=t;i++){
		cin>>a[i];
	}
	dfs(1,0,k);
	cout<<res<<endl;
    return 0;
}

