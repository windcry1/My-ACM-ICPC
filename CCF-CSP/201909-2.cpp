/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/21/2019 4:28:57 PM
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
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int res=0,ans=0,n;
	bool flag[1010]={0};
	cin>>n;
	for(int i=0;i<n;i++){
		int m;cin>>m;
		int now=0;cin>>now;
		for(int j=1;j<m;j++){
			int t;cin>>t;
			if(t<=0) now+=t;
			else {
				if(now!=t) flag[i]=1,now=t;
			}
		}
		res+=flag[i];
		ans+=now;
	}
	int res1=0;
	flag[n]=flag[0];flag[n+1]=flag[1];
	for(int i=0;i<n;i++){
		if(flag[i]&&flag[i+1]&&flag[i+2])
			res1++;
	}
	cout<<ans<<" "<<res<<" "<<res1<<endl;
	return 0;
}

