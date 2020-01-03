/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/29/2019 2:05:01 AM
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
int a[200010],pos1[200010],pos2[200010],res[200010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int n;cin>>n;for(int i=1;i<=n;i++)cin>>a[i],pos1[a[i]]++,pos2[a[i]]++;
	int res1=0,res2=0;
	for(int i=2;i<=n+1;i++){
		if(pos1[i-1]) res1++,pos1[i]=0,pos1[i+1]=0;
	}
	for(int i=1;i<=n;i++){
		if(pos2[i]>0&&pos2[i]+res[i]&&!(pos2[i-1]+res[i-1])) res[i-1]++,pos2[i]--;
		if(pos2[i]>0&&pos2[i]+res[i]>1&&!res[i+1]) res[i+1]++,pos2[i]--;
	}
	//for(int i=0;i<=n+1;i++) cout<<pos2[i]<<" ";cout<<endl;
	//for(int i=0;i<=n+1;i++) cout<<res[i]<<" ";cout<<endl;
	for(int i=0;i<=n+1;i++) if(pos2[i]+res[i]) ++res2;
	cout<<res1<<" "<<res2<<endl;
	return 0;
}

