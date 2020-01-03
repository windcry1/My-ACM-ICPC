/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/21/2019 7:38:02 PM
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
map<int,int> mp;
string add(string t){
	string res=t;
	reverse(res.begin(),res.end());
	res[0]++;
	for(int i=0;i<res.size()-1;i++){
		if(!isdigit(res[i])){
			res[i]-=10;
			res[i+1]++;
		}
	}
	if(!isdigit(res[res.size()-1]))
		return "";
	reverse(res.begin(),res.end());
	return res;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int n,k;string s;cin>>n>>k>>s;
	string t,res;
	for(int i=0;i<k;i++)
		t+=s[i];
	for(int i=0;i<n;i++)
		res+=t[i%k];
	if(res>=s){
		cout<<res.size()<<endl<<res<<endl;
		return 0;
	}
	res="";
	t=add(t);
	if(t==""){
		t="1";
		for(int i=0;i<k;i++)
			t.push_back('0');
		for(int i=0;i<=n;i++)
			res.push_back(t[i%k]);
		cout<<res.size()<<endl<<res<<endl;
		return 0;
	}
	for(int i=0;i<n;i++)
		res+=t[i%k];
	cout<<res.size()<<endl<<res<<endl;
	return 0;
}
