/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/22/2019 2:23:34 PM
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
//#include <unordered_map>
//#include <unordered_set>
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int MMAX = 0x7fffffff;
const int INF = 0xfffffff;
const int mod = 1e9+7;
map<int,int> ma;
inline char change(char c){
	if(c=='A'||c=='B'||c=='C') return '2';
	if(c=='D'||c=='E'||c=='F') return '3';
	if(c=='G'||c=='H'||c=='I') return '4';
	if(c=='J'||c=='K'||c=='L') return '5';
	if(c=='M'||c=='N'||c=='O') return '6';
	if(c=='P'||c=='R'||c=='S') return '7';
	if(c=='T'||c=='U'||c=='V') return '8';
	if(c=='W'||c=='X'||c=='Y') return '9';
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;while(T--){
		string s;cin>>s;
		int temp=0;
		for(int i=0,len=s.length();i<len;i++){
			if(s[i]=='-') continue;
			temp=temp*10+(isdigit(s[i])?s[i]-'0':change(s[i])-'0');
		}
		ma[temp]++;
	}
	bool flag=false;
	for(map<int,int>::iterator j=ma.begin();j!=ma.end();j++){
		if(j->second>1) {
			flag=true;
			printf("%03d-%04d %d\n",j->first/10000,j->first%10000,j->second);
		}
	}
	if(!flag) puts("No duplicates.");
	return 0;
}

