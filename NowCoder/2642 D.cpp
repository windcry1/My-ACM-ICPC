/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/24/2019 4:35:54 PM
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
char a[1010][1010];
int n;
inline void dfs(int x,int y){
	a[x][y]='.';
	for(int i=0;i<4;i++){
		int dx=x+dir[i][0],dy=y+dir[i][1];
		if(dx>=0&&dx<n&&dy>=0&&dy<n&&a[dx][dy]=='*')
			dfs(dx,dy);
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	int res=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(a[i][j]=='*')
				dfs(i,j),++res;
	cout<<res<<endl;
	return 0;
}

