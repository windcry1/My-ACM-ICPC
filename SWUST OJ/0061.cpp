/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/13/2019 3:09:33 PM
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
map<vector<int>,int> ma; 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;while(cin>>n&&n){
		ma.clear();
		for(int i=0;i<n;i++){
			vector<int> v;
			int t;
			for(int j=0;j<5;j++) cin>>t,v.push_back(t);
			sort(v.begin(),v.end());
			ma[v]++;
		}
		int MAX=0,cnt=0;
		for(map<vector<int>,int>::iterator it=ma.begin();it!=ma.end();it++)
			MAX=max(it->second,MAX);
		for(map<vector<int>,int>::iterator it=ma.begin();it!=ma.end();it++)
			if(it->second==MAX)
				cnt+=MAX;
		cout<<cnt<<endl;
	}
	return 0;
}

