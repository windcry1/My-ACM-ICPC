/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 8:07:09 PM
*************************************************************************/
#pragma GCC optimize(3)
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
int dp[110][(1<<20)+10];
int state[110];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int n,m,k,t;cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
		for(int j=0;j<k;j++)
			cin>>t,state[i]|=1<<(t-1);
	memset(dp,INF,sizeof dp);
	dp[0][0]=0;
	for(int i=1;i<=n;i++){
		for(int j=0;j<(1<<m);j++){
			if(dp[i-1][j]>=INF) continue; 
			dp[i][j|state[i]]=min(dp[i][j|state[i]],dp[i-1][j]+1);
			dp[i][j]=min(dp[i][j],dp[i-1][j]);
		}
	}
	cout<<(dp[n][(1<<m)-1]==INF?-1:dp[n][(1<<m)-1])<<endl; 
	return 0;
}

