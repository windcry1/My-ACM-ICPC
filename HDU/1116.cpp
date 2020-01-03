/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/19/2019 4:26:15 PM
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
int a[50010],bit[50010],n;
inline int lowbit(int x){
	return x&(-x);
}
void edit(int pos,int data){
	for(int i=pos;i<=n;i+=lowbit(i))
		bit[i]+=data;
}
int getsum(int pos){
	int ans=0;
	for(int i=pos;i>0;i-=lowbit(i))
		ans+=bit[i];
	return ans;
}
int query(int l,int r){
	return getsum(r)-getsum(l-1);
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int T;cin>>T;for(int cas=1;cas<=T;cas++){
		memset(bit,0,sizeof bit);
		cin>>n;
		int t; 
		for(int i=1;i<=n;i++) cin>>t,edit(i,t);
		string s;
		cout<<"Case "<<cas<<":"<<endl;
		while(cin>>s&&s!="End"){
			if(s=="Query") {
				int l,r;cin>>l>>r;
				cout<<query(l,r)<<endl;
			}
			if(s=="Add"){
				int pos,val;cin>>pos>>val;
				edit(pos,val);
			}
			if(s=="Sub"){
				int pos,val;cin>>pos>>val;
				edit(pos,-val);
			}
		}
	}
	return 0;
}

