/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/21/2019 5:03:27 PM
*************************************************************************/
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <complex>
#include <stack>
#include <bitset>
#include <iomanip>
#include <list>
#include <sstream>
#include <fstream>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
#define ull unsigned long long
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#define lowbit(x) x&(-x)
#define ls u<<1
#define rs u<<1|1
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int MMAX = 0x7fffffff;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ostream& operator <<(ostream &out, pii &p){
	return out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	return in>>p.first>>p.second;
}
struct Node{
	int next[2];
	Node(){next[0]=-1,next[1]=-1;}
}node[100010<<5];
int tot=0;
int a[100010];
void insert(int x){
	int now=0;
	for(int i=31;~i;i--){
		bool temp=x&(1<<i);
		if(node[now].next[temp]==-1)
			node[now].next[temp]=++tot;
		now=node[now].next[temp];
	}
}
int query(int x){
	int v=0,now=0;
	for(int i=31;~i;i--){
		bool temp=x&(1<<i);
		if(node[now].next[!temp]!=-1)
			temp=!temp;
		v=v|(temp<<i);
		now=node[now].next[temp];
	}
	return v;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		insert(a[i]);
	}
	int ans=0;
	for(int i=1;i<=n;i++) ans=max(ans,a[i]^query(a[i]));
	cout<<ans<<endl;
	return 0;
}

