/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/30/2019 11:17:09 PM
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
const int INF = 0x3fffffff;
const int mod = 1e9+7;
map<int,int> now;
int a[200010],res[200010];
list<int> v[200010]; 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,k;cin>>n>>k;for(int i=0;i<n;i++) cin>>a[i],v[a[i]].push_back(i);
	int MIN=INF;
	for(auto i=200000;i>=1;i--){
		if(v[i].size()>=k){
			cout<<0<<endl;
			return 0;
		}
	}
	for(auto i=200001;i>=3;i-=2){
		if(v[i].empty()&&v[i-1].empty()) continue;
		while(!v[i].empty()&&!v[i-1].empty()){
			if(now[v[i].front()]<now[v[i-1].front()]){
				now[v[i].front()]++;
				res[i>>1]+=now[v[i].front()];
				v[i>>1].push_back(v[i].front());
				v[i].pop_front();
				if(v[i>>1].size()>=k)
					MIN=min(MIN,res[i>>1]);
			}else{
				now[v[i-1].front()]++;
				res[i>>1]+=now[v[i-1].front()];
				v[i>>1].push_back(v[i-1].front());
				v[i-1].pop_front();
				if(v[i>>1].size()>=k)
					MIN=min(MIN,res[i>>1]);
			}
		}
		while(!v[i].empty()){
				now[v[i].front()]++;
				res[i>>1]+=now[v[i].front()];
				v[i>>1].push_back(v[i].front());
				v[i].pop_front();
				if(v[i>>1].size()>=k)
					MIN=min(MIN,res[i>>1]);
			}
		while(!v[i-1].empty()){
				now[v[i-1].front()]++;
				res[i>>1]+=now[v[i-1].front()];
				v[i>>1].push_back(v[i-1].front());
				v[i-1].pop_front();
				if(v[i>>1].size()>=k)
					MIN=min(MIN,res[i>>1]);
			}
	}
	cout<<(MIN)<<endl;
	return 0;
}

