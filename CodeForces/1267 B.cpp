/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/5/2019 1:22:26 PM
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
	string s;cin>>s;
	int posl=0,posr=s.size()-1,res1=0,res2=s.size()-1;
	int temp1=0,temp2=0;
	while(posl<=posr){
		if(s[posl]!=s[posr]){
			cout<<0<<endl;
			return 0;
		}
		res1=posl;res2=posr;
		temp1=0;temp2=0;
		char c=s[posl];
		while(s[posl]==c) posl++,temp1++;
		while(s[posr]==c) posr--,temp2++;
		//if(posl>=posr) break;
		if(temp1+temp2<3){
			cout<<0<<endl;
			return 0;
		}
	}
	cout<<res2-res1+2<<endl;
	return 0;
}

