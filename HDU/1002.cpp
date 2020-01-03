/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/22/2019 10:31:42 AM
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
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ostream& operator <<(ostream &out, pii &p){
	return out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	return in>>p.first>>p.second;
}
string add(string a,string b){
	string res="0";
	for(auto i=a.begin(),j=b.begin();i!=a.end()&&j!=b.end();){
		res+=(i!=a.end()?*i:'0')+(j!=b.end()?*i:'0')-'0'-'0';
		if(!isdigit(res.end()[-1])){
			res.end()[-1]-=10;
			res.push_back('1');
		}
		else res.push_back('0');
		if(i!=a.end())i++;
		if(j!=b.end())j++;
	}
	return reverse(res.begin(),res.end()),res;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int T;cin>>T;for(int cas=1;cas<=T;cas++){
		string a,b;cin>>a>>b;
		cout<<"Case "<<cas<<":"<<endl;
		cout<<a<<" + "<<b<<" = "<<add(a,b)<<endl;
	}
	return 0;
}

