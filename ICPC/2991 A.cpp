/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/31/2019 12:10:05 PM
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
const int mod = 1e9+7;
unsigned int a[10000010];
int n,p,q,m;
unsigned int SA,SB,SC;
unsigned int rng61(){
	SA ^= SA << 16;
	SA ^= SA >> 5;
	SA ^= SA << 1;
	unsigned int t = SA;SA = SB;
	SB = SC;
	SC ^= t ^ SA;
	return SC;
}
ll gen(){
	int tot=0;
	scanf("%d%d%d%d%u%u%u",&n,&p,&q,&m,&SA,&SB,&SC);
	ll res=0;
	for(ll i = 1;i <= n;i++){
		if(rng61() % (p + q) < p){
			++tot;
			a[tot]=max(rng61() % m + 1,a[tot-1]);
		}
		else tot=(tot==0?0:tot-1);
		res ^= 1LL*i*a[tot];
	}
	return res;
}
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
        printf("Case #%d: %lld\n",i,gen());
    return 0;
}
