/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/8/2019 7:01:49 PM
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
int b[4];
vector<int> res;
bool dfs(int x){
	res.clear();
	while(b[x]&&x<4){
		b[x]--;
		res.push_back(x);
		x+=(x&&b[x-1]?-1:1);
	}
	int flag=true;
	for(int i=0;i<4;i++){
		if(b[i]>0) flag=false;
	}
	return flag;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int a[4];
	for(int i=0;i<4;i++) cin>>a[i];
	bool flag=false;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++) b[j]=a[j];
		flag=dfs(i);
		if(flag) break;
	}
	cout<<(flag?"YES":"NO")<<endl;
	if(flag) {
		for(auto i:res) cout<<i<<" ";cout<<endl;
	}
	return 0;
}

