/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/27/2019 11:59:16 PM
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
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
int n,k,l;
string s;
vector<bool> v;
vector<int> cnt;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	cin>>n>>k>>l>>s;
	int lower=0,upper=0;
	for(int i=0;i<s.size();i++) {
		v.push_back(islower(i));
		if(islower(s[i])) ++lower,--upper;
		else --upper,++lower;
		if(i>=l){
			if(islower(s[i-l])) --lower,++upper;
			else --upper,++lower;
			cnt.push_back(lower-upper);
		}
	}
	int totlower=0;
	for(auto i:v) totlower+=i;
	int t=2*totlower-n;
	sort(cnt.begin(),cnt.end());
	for(int i=0;i<k;i++){
		if(*lower_bound(cnt.begin(),cnt.end()))
	}
	return 0;
}

