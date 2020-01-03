/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 6:30:10 PM
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
int x[1010],y[1010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	int n;cin>>n;
	for(int i=1;i<=n;i++) cin>>x[i]>>y[i];
	int cnt=0;
	while(1){
		vector<int> v;
		for(int i=1;i<=n;i++) if((x[i]+y[i])&1) v.push_back(i);
		if(v.size()>0 and v.size()<n){
			cout<<v.size()<<endl;
			for(auto i:v) cout<<i<<" ";cout<<endl;
			return 0;
		}
		for(int i=1;i<=n;i++){
			int t=x[i];
			x[i]=(x[i]-y[i])>>1;
			y[i]=(t+y[i])>>1;
		}
		cout<<"Round: "<<++cnt<<endl;
		for(int i=1;i<=n;i++) cout<<x[i]<<" "<<y[i]<<endl;
		cout<<"End of Round "<<cnt<<endl<<endl;
	}
	return 0;
}

