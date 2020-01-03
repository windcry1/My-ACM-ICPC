/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 10/23/2019 7:49:01 PM
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
int main(){
	int T;cin>>T;while(T--){
		int n,m;cin>>n>>m;
		double res=0;
		for(int i=0;i<n;i++){
			int a,b,c,d;
			scanf("%02d%*c%02d%02d%*c%02d",&a,&b,&c,&d);
			res+=((c-a)*60+d-b)/60.0;
		}
		cout<<(res>=m?"YES":"NO")<<endl;
	}
	return 0;
}
