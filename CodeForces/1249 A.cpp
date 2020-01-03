/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 10/22/2019 10:44:23 PM
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
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int MMAX = 0x7fffffff;
const int INF = 0xfffffff;
const int MAXN = 1e5+5;
const int MAXM = 2e5+5;
const int MOD = 1e9+7;
const double PI = acos(-1.0);
const double EXP = 1e-8;
int p[MAXN];
int ans[MAXN];
int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		memset(ans,0,sizeof ans);
		for(int i = 1;i <= n;i++)
			scanf("%d",p+i);
		for(int i = 1;i <= n;i++){
			int t = i,cnt = 1;
			while(i!=p[t]){
				cnt++;
				t = p[t];
			}
			ans[i] = cnt;
		}
		for(int i = 1;i <= n;i++)
			printf("%d%c",ans[i]," \n"[i==n]);
	}
	return 0;
}
