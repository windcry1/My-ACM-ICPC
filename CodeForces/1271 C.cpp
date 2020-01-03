/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/16/2019 10:35:19 PM
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
int x[200010],y[200010];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int n,sx,sy;cin>>n>>sx>>sy;
	int res[4]={0};
	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i];
		if(x[i]<sx) res[0]++;
		if(x[i]>sx) res[1]++;
		if(y[i]<sy) res[2]++;
		if(y[i]>sy) res[3]++;
	}
	int m=-1,pos;
	for(int i=0;i<4;i++){
		if(res[i]>m){
			m=res[i];
			pos=i;
		}
	}
	cout<<m<<endl;
	if(pos==0) cout<<sx-1<<" "<<sy<<endl;
	if(pos==1) cout<<sx+1<<" "<<sy<<endl;
	if(pos==2) cout<<sx<<" "<<sy-1<<endl;
	if(pos==3) cout<<sx<<" "<<sy+1<<endl;
	return 0;
}

