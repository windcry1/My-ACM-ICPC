/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/30/2019 12:50:41 PM
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
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ostream& operator <<(ostream &out, pii &p){
	return out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	return in>>p.first>>p.second;
}
ll dp[110][70][70];//first: 行数，second: 前面的状态，third: 现在的状态 
int n,m;
char a[110][11];
vector<pii> v;
inline int bitnum(int x){
	int res=0;
	while(x){
		++res;
		x=x&(x-1);
	}
	return res;
}
inline void init(){
	for(int i=0;i<(1<<m);i++){
		int res=bitnum(i);
		if(!((i>>1)&i)&&!((i>>2)&i)&&!((i<<1)&i)&&!((i<<2)&i))
			v.emplace_back(i,res);
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>n>>m;
	v.emplace_back(0,0);
	init();
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<v.size();i++){
		bool flag=0;
		for(int j=0;j<m;j++)
			if((v[i].first&(1<<j))&&a[i][j]=='H') flag=1;
		if(!flag)
			dp[0][0][i]=v[i].second;
	}
	for(int i=1;i<v.size();i++){
		bool flag=0;
		for(int j=0;j<m;j++)
			if((v[i].first&(1<<j))&&a[i][j]=='H') flag=1;
		if(!flag){
			for(int j=1;j<v.size();j++){
				if(!(v[j].first&v[i].first)){
					dp[1][j][i]=max(dp[1][j][i],dp[0][0][j]+v[i].second);
				}
			}
		}
	}
//	for(int i=1;i<v.size();i++){
//		for(int j=1;j<v.size();j++){
//			cout<<dp[1][i][j]<<" ";
//		}
//		cout<<endl;
//	}
	//预处理两遍
	//dp[0]和dp[1]; 
	for(int i=2;i<n;i++){
		for(int j=1;j<v.size();j++){
			bool flag=0;
			for(int k=0;k<m;k++)
				if((v[j].first&(1<<k))&&a[i][k]=='H') flag=1;
			if(!flag){
				for(int k=1;k<v.size();k++){
					for(int l=1;l<v.size();l++){
						if(!(v[j].first&v[k].first)&&!(v[k].first&v[l].first)){
							dp[i][k][j]=max(dp[i][k][j],dp[i-1][l][k]+v[j].second);
						}
					}
				}
			}
		}
	}
	ll res=0;
	for(int i=1;i<v.size();i++)
		for(int j=1;j<v.size();j++)
			res=max(res,dp[n-1][i][j]);
	cout<<res<<endl;
	return 0;
}
