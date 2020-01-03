/*************************************
>>> Author:  xiaofan
>>> Blog:    https://xiaofan7.cn
>>> Date:    2019-12-29 00:54:05
**************************************/
 
#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;
#define fi first
#define se second
#define ll long long
#define pii pair<int,int>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
const int INF = 0x3f3f3f3f;
 
inline int read () {
	register int s = 0, w = 1;
	register char ch = getchar ();
	while (! isdigit (ch)) {if (ch == '-') w = -1; ch = getchar ();}
	while (isdigit (ch)) {s = (s << 3) + (s << 1) + (ch ^ 48); ch = getchar ();}
	return s * w;
}
 
 
 
int main() {
	IOS;
	//freopen("D:\\in.txt","r",stdin);
	//freopen("D:\\out2.txt","w",stdout);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int mm=n/k;
		int cnt=k/2;
		int sum=mm*k;
		int ca=n-sum;
		if(ca<cnt)
			cout<<n<<endl;
		else
			cout<<sum+cnt<<endl;
	}
 
 
 
 
	return 0;
}
 
