/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/21/2019 3:57:33 PM
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
int a[210][210];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int x1,y1,x2,y2,x3,y3,x4,y4;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4){
		x1+=100,y1+=100,x2+=100,y2+=100,x3+=100,y3+=100,x4+=100,y4+=100;
		memset(a,0,sizeof a);
		int t1=min(x1,x2),t2=max(x1,x2),t3=min(y1,y2),t4=max(y1,y2);
		for(int i=t1;i<=t2;i++){
			if(i==t1||i==t2)
				for(int j=t3;j<=t4;j++) a[i][j]=1;
			else a[i][t3]=1,a[i][t4]=1;
		}
		t1=min(x3,x4),t2=max(x3,x4),t3=min(y3,y4),t4=max(y3,y4);
		bool flag=true;
		for(int i=t1;i<=t2;i++){
			if(i==t1||i==t2)
				for(int j=t3;j<=t4;j++){
					if(a[i][j]) flag=false;
				}
			else if(a[i][t3]||a[i][t4]) flag=false;
		}
		cout<<(flag?"NO\r\n":"YES\r\n");
	}
	return 0;
}

