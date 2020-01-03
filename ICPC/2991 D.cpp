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
const double PI = acos(-1);
struct node{
	double x,y;
	inline void operator =(const node a){
		x=a.x,y=a.y;
	}
}a[55];
inline double cal(node a,node b,node c){
	double AB_2=(a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y);
	double BC_2=(c.x-b.x)*(c.x-b.x)+(c.y-b.y)*(c.y-b.y);
	double AC_2=(c.x-a.x)*(c.x-a.x)+(c.y-a.y)*(c.y-a.y);
	return acos((AB_2+BC_2-AC_2)/(2*sqrt(BC_2)*sqrt(AB_2)));
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
	for(int k=0;k<T;k++){
		int n;cin>>n;
		for(int i=0;i<n;i++) cin>>a[i].x>>a[i].y;
		a[n]=a[0];a[n+1]=a[1];
		double qx,qy;cin>>qx>>qy;
		double res=0;
		for(int i=0;i<n;i++){
			double eagle=PI-cal(a[i],a[i+1],a[i+2]);
			double dis=sqrt((a[i+1].x-qx)*(a[i+1].x-qx)+(a[i+1].y-qy)*(a[i+1].y-qy));
			res+=eagle*dis;
		}
		cout<<"Case #"<<k+1<<": "<<fixed<<setprecision(3)<<res<<endl;
	}
	return 0;
}

