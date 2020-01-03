/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/10/2019 1:52:09 PM
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
	string s;
	while(cin>>s){
		int res=0;
		for(string::iterator i=s.begin();i<s.end();i++){
			int temp=0;
			s.insert(i,'C');
			for(int j=0;j<s.size()-3;i++){
				if(s[j]=='C'&&s[j+1]=='C'&&s[j+2]=='P'&&s[j+3]=='C') temp++;
			}
			res=max(res,temp);
			s.erase(i); 
			s.insert(i,'P');
			temp=0;
			for(int j=0;j<s.size()-3;j++){
				if(s[j]=='C'&&s[j+1]=='C'&&s[j+2]=='P'&&s[j+3]=='C') temp++;
			}
			s.erase(i);
			res=max(res,temp);
		}
		cout<<res<<endl;
	}
	return 0;
}

