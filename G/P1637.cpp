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
#define lowbit(x) x&(-x)
using namespace std;
const int INF = 0x3f3f3f3f;
int a[1000010],s[1000010];
int bit1[1000010],bit2[1000010];
int num1[1000010],num2[1000010];
int n,m;
int cal(int x){
	return lower_bound(s+1,s+1+m,x)-s;
}
void edit1(int pos,int val){
	for(int i=pos;i<=n;i+=lowbit(i)){
		bit1[i]+=val;
	}
}
int query1(int pos){
	int res=0;
	for(int i=pos;i>=1;i-=lowbit(i)){
		res+=bit1[i];
	}
	return res;
}
void edit2(int pos,int val){
	for(int i=pos;i<=n;i+=lowbit(i)){
		bit2[i]+=val;
	}
}
int query2(int pos){
	int res=0;
	for(int i=pos;i>=1;i-=lowbit(i)){
		res+=bit2[i];
	}
	return res;
}
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i],s[i]=a[i];
	sort(s+1,s+1+n);
	m=unique(s+1,s+1+n)-s-1;
	for(int i=1;i<=n;i++) a[i]=cal(a[i]),edit1(a[i],1);
	for(int i=1;i<=n;i++){
		edit1(a[i],-1);
		num2[i]=(query2(a[i]));
		num1[i]=query1(m)-query1(a[i]-1);
		edit2(a[i],1);
	}
	for(int i=1;i<=n;i++) cout<<num1[i]<<" \n"[i==n];
	for(int i=1;i<=n;i++) cout<<num2[i]<<" \n"[i==n];
    return 0;
}

