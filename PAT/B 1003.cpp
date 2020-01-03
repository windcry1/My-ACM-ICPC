/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/4/2019 9:49:27 PM
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
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
	while(T--){
		int l,r;
		string s;cin>>s;
		map<char,int> mp;
		for(auto i:s) mp[i]++;
		bool flag=0;
		for(auto i:mp){
			if(i.first!='P'&&i.first!='A'&&i.first!='T'){
				cout<<"NO"<<endl;
				flag=1;
				break;
			}
			if((i.first=='P'||i.first=='T')&&i.second!=1){
				cout<<"NO"<<endl;
				flag=1;
				break;
			}
		}
		if(flag) continue;
		for(int i=0;i<s.size();i++){
			if(s[i]=='T') {
				cout<<"NO"<<endl;
				flag=1;
				break;
			}
			if(s[i]=='P') {
				l=i;
				break;
			}
		}
		if(flag) continue;
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]=='P'){
				cout<<"NO"<<endl;
				flag=1;
				break;
			}
			if(s[i]=='T'){
				r=i;
				break;
			}
		}
		if(flag) continue;
		int num1=l,num2=r-l-1,num3=s.size()-r-1;
		cout<<(num2!=0&&num1*num2==num3?"YES":"NO")<<endl;
	}
	return 0;
}

