/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/28/2019 1:07:25 PM
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
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
double dis2(double x1,double y1,double x2,double y2){
	return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
}
double cal_lx(pdd p,double d){
	if(d*d-p.second*p.second<0) return 1e12+1;
	return -sqrt(d*d-p.second*p.second)+p.first;
}
double cal_rx(pdd p,double d){
	if(d*d-p.second*p.second<0) return 1e12+1;
	return sqrt(d*d-p.second*p.second)+p.first;
}
pdd p[1010];
pdd seq[1010];
bool vis[1010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int n,cas=1;double d;while(cin>>n>>d){
		if(n==0) return 0;
		bool flag=0;
		for(int i=1;i<=n;i++) {
			cin>>p[i].first>>p[i].second;
			seq[i].first=cal_lx(p[i],d);
			seq[i].second=cal_rx(p[i],d);
		}
		int res=1;
		sort(seq+1,seq+1+n);
		double tmp=seq[1].second;
		for(int i=1;i<=n;i++){
			if(tmp<seq[i].first) res++,tmp=seq[i].second;
			else if(tmp>seq[i].second) tmp=seq[i].second;
		}
		for(int i=1;i<=n;i++) if(seq[i].first>=1e12||seq[i].second>=1e12) res=-1;
		cout<<"Case "<<cas++<<": "<<res<<endl;
	}
	return 0;
}

