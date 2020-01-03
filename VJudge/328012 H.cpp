/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/22/2019 1:13:37 PM
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
int x[10010];
int MAX=0;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int a,b;
	for(int i=1;i<=10000;i++){
		int cnt=1;
		int t=i;
		while(t!=1){
			if(t&1) t=3*t+1;
			else t/=2;
			cnt++;
		}
		x[i]=cnt;
	}
	while(cin>>a>>b){
		MAX=0;
		int p=a,q=b;
		if(a>b) swap(a,b);
		cout<<p<<" "<<q<<" "<<*max_element(x+a,x+b)<<endl;
	}
	return 0;
}

