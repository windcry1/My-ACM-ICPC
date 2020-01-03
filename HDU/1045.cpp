/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/28/2019 10:54:12 PM
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
	out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	in>>p.first>>p.second;
}
int n,res;
char a[5][5];
int vis[5][5];
bool judge(int x,int y){
	for(int i=x;i>=0;i--){
		if(vis[i][y]==1) return 0;
		if(a[i][y]=='X') break;
	}
	for(int i=y;i>=0;i--){
		if(vis[x][i]==1) return 0;
		if(a[x][i]=='X') break;
	}
	return 1;
}
void dfs(int x,int y,int num){
	if(x==n){
		res=max(res,num);
		return ;
	}
	for(int i=y;i<n;i++){
		if(a[x][i]=='.'&&judge(x,i)){
			vis[x][i]=1;
			dfs(x,i+1,num+1);
			vis[x][i]=0;
		}
	}
	dfs(x+1,0,num);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	while(cin>>n){
		if(n==0) break;
		res=0;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		dfs(0,0,0);
		cout<<res<<endl;
	}
	return 0;
}

