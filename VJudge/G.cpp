/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/20/2019 11:21:58 PM
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
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int step,mod;while(cin>>step>>mod){
		map<int,bool> ma;
		int cnt=1;
		ma[0]=true;
		int now=step;
		while(ma.find(now)==ma.end()){
			ma[now]=true;
			++cnt;
			now=(now+step)%mod;
		}
		string s_step=to_string(step),s_mod=to_string(mod);
		for(int i=s_step.length();i<10;i++)
			cout<<" ";
		cout<<s_step;
		for(int i=s_mod.length();i<10;i++)
			cout<<" ";
		cout<<s_mod;
		cout<<(cnt==mod?"    Good Choice":"    Bad Choice")<<endl<<endl;
	}
	return 0;
}

