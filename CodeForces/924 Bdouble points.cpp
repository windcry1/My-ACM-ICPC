/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/15/2019 10:02:58 AM
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
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int MMAX = 0x7fffffff;
const int INF = 0xfffffff;
const int mod = 1e9+7;
ostream& operator <<(ostream &out, pii &p){
	out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	in>>p.first>>p.second;
}
int a[100010];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,U;cin>>n>>U;
	for(int i=0;i<n;i++) cin>>a[i];
	int now=2;
	double res=-1;
	for(int i=0;i<n-2;i++){
		if(a[i+2]-a[i]>U) continue;
		while(now<n-1&&a[now+1]-a[i]<=U) now++;
		if(a[now]-a[i]<=U){
			double tmp = (double)(a[now]-a[i+1])/(a[now]-a[i]);
			res=max(res,tmp);
		}
	}
	if(res==-1) cout<<-1<<endl;
	else cout<<fixed<<setprecision(12)<<res<<endl;
	return 0;
}

