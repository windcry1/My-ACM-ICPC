/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/13/2019 11:12:14 PM
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
const int INF = 0xfffffff;
const int mod = 1e9+7;
int a[200010];
struct node{
	int p,s;
	inline bool operator <(const node &a)const{
		return p<a.p||p==a.p&&s>a.s;
	}
}x[200010];
ostream& operator <<(ostream &out, node &p){
	out<<p.p<<" "<<p.s;
}
inline bool cmp(const node &a,const node &b){
	return a.s>b.s&&a.p>b.p;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;while(T--){
		int n;cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		int m,MAX=-1;cin>>m;
		for(int i=0;i<m;i++) cin>>x[i].p>>x[i].s,MAX=max(MAX,x[i].p);
		sort(x,x+m);
		if(MAX<*max_element(a,a+n)){
			cout<<-1<<endl;
			continue;
		}
		node t;
		t.p=-1,t.s=0;
		int res=1;
		for(int i=0;i<n;i++){
			t.p=max(t.p,a[i]),t.s++;
			node *temp = lower_bound(x,x+m,t,cmp);
			if(temp->p>t.p||temp->s<t.s||temp==x+m) {
				t.s=0;
				t.p=-1;
				++res;
				i--;
			}
		}
		cout<<res<<endl; 
	}
	return 0;
}

