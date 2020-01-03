/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 10/20/2019 10:06:00 AM
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
int a[210];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;cin>>n;for(int i=0;i<n;i++) cin>>a[i];
	int MIN=MMAX,MAX=-MMAX;
	for(int i=0;i<n;i++)
		a[i+n]=a[i];
	for(int i=0;i<n;i++){
		int res=a[i]+a[i+n-1];
		for(int j=1;j<n-1;j++){
			res+=a[j+i]<<1;
		}
		MIN=min(res,MIN);
		MAX=max(res,MAX);
	}
	cout<<MIN<<endl<<MAX<<endl;
	return 0;
}

