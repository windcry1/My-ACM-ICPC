/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/28/2019 11:09:01 PM
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
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
int a[100010],b[100010];
bool vis[100010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int T;cin>>T;while(T--){
		int n,m;cin>>n>>m;
		for(int i=1;i<=n;i++) cin>>a[i],vis[i]=false;
		for(int i=1;i<=m;i++) cin>>b[i];
		ll res=0,top=0,num=1;
		for(int i=1;i<=m;i++){
			if(vis[b[i]]){
				res++;
				top--;
				continue;
			}
			while(b[i]!=a[num]){
				vis[a[num]]=1;
				top++;
				num++;
			}
			num++;
			res+=2*top+1;
		}
		cout<<res<<endl;
	}
	return 0;
}

