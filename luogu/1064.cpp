/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 11:03:37 PM
*************************************************************************/
//#pragma GCC optimize(3)
//#pragma GCC diagnostic error "-std=c++11"
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
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#define lowbit(x) x&(-x)
#define ls u<<1
#define rs u<<1|1
using namespace std;
template<typename T> inline T MIN(const T &a,const T &b) {return a<b?a:b;}
template<typename T> inline T MAX(const T &a,const T &b) {return a>b?a:b;}
template<typename T,typename ...Args> inline T MIN(const T &a,const T &b,Args ...args) {return MIN(MIN(a,b),args...);}
template<typename T,typename ...Args> inline T MAX(const T &a,const T &b,Args ...args) {return MAX(MAX(a,b),args...);}
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
struct node{
	int v,p;
}a[70];//p value, v cost
vector<node> att[70],group[70];//attachment and different combination
int dp[32010],q[70];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	int m,n;cin>>m>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].v>>a[i].p>>q[i];
		a[i].p*=a[i].v;//change the value of the i-th item
		if(q[i]) att[q[i]].push_back(node{a[i].v,a[i].p});//q[i] is not 0, means this is an attachment of q[i], so add one attachment to att[q[i]]
	}
	for(int i=1;i<=n;i++){
		if(!q[i]){//if this is the main item
			group[i].push_back(node{a[i].v,a[i].p});//only the main item
			if(att[i].size()==1)
				group[i].push_back(node{a[i].v+att[i][0].v,a[i].p+att[i][0].p});//include the first attachment
			if(att[i].size()==2){
				group[i].push_back(node{a[i].v+att[i][0].v,a[i].p+att[i][0].p});//include the first attachment
				group[i].push_back(node{a[i].v+att[i][1].v,a[i].p+att[i][1].p});//include the second attachment
				group[i].push_back(node{a[i].v+att[i][0].v+att[i][1].v,a[i].p+att[i][0].p+att[i][1].p});//include both the attachments
			}
		}
	}
	for(int i=1;i<=n;i++){//for_each item
		if(q[i]) continue;//if the item is not the main item, continue
		for(int j=m;j>=0;j--)//for_each capacity
			for(int k=0;k<group[i].size();k++)//for_each state
				if(j>=group[i][k].v)
					dp[j]=max(dp[j],dp[j-group[i][k].v]+group[i][k].p);
	}
	cout<<dp[m]<<endl;
	return 0;
}


