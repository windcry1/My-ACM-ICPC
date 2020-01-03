/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 11:03:37 PM
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
ll dis[1010][1010],x[1010],y[1010];
inline ll dis2(ll ax,ll ay,ll bx,ll by){
	return (ax-bx)*(ax-bx)+(ay-by)*(ay-by);
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	int n;cin>>n;
	ll gcd=0;
	for(int i=1;i<=n;i++) cin>>x[i]>>y[i];
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++){
			dis[j][i]=dis[i][j]=dis2(x[i],y[i],x[j],y[j]);
			if(!gcd) gcd=dis[i][j];
			else gcd=__gcd(dis[i][j],gcd);
		}
	for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) dis[i][j]/=gcd;
	vector<int> res; res.push_back(1);
	//for(int i=1;i<=n;i++) cout<<dis[1][i]<<" ";cout<<endl;
	for(int i=2;i<=n;i++) if(!(dis[1][i]&1)) res.push_back(i);
	cout<<res.size()<<endl;
	for(auto i:res) cout<<i<<" ";cout<<endl;
	return 0;
}


