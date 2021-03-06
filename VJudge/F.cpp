/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/20/2019 11:10:48 PM
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
const int INF = 0xfffffff;
const int mod = 1e9+7;
int change(string n){
	int res=0;
	for(auto i:n) res+=i-'0';
	return res;
}
int change(int n){
	int res=0;
	while(n){
		res+=n%10;
		n/=10; 
	}
	return res;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;
	while(cin>>s&&s!="0"){
		if(s.length()==1){
			cout<<s<<endl;
			continue;
		}
		int n=change(s);
		while(n%10!=n) n=change(n); 
		cout<<n<<endl;
	}
	return 0;
}

