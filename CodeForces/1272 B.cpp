/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/12/2019 9:48:15 PM
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
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int T;cin>>T;while(T--){
		string s;cin>>s;
		int cnt[4]={0};
		for(auto i:s){
			if(i=='L') cnt[0]++;
			if(i=='R') cnt[1]++;
			if(i=='U') cnt[2]++;
			if(i=='D') cnt[3]++;
		}
		string res;
		int num1=min(cnt[0],cnt[1]),num2=min(cnt[2],cnt[3]);
		if(!num1||!num2){
			if(!num1&&num2){
				cout<<2<<endl;
				cout<<"UD"<<endl;
			}
			else if(!num2&&num1){
				cout<<2<<endl;
				cout<<"LR"<<endl;
			}
			else cout<<0<<endl<<endl;
			continue;
		}
		for(int i=0;i<num1;i++) res+='L';
		for(int i=0;i<num2;i++) res+='U';
		for(int i=0;i<num1;i++) res+='R';
		for(int i=0;i<num2;i++) res+='D';
		cout<<res.size()<<endl<<res<<endl;
	}
	return 0;
}

