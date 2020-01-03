/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/24/2019 11:29:02 PM
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
struct node{
	bool hard;
	ll limit;
	bool operator <(const node &a) const{
		return limit<a.limit||limit==a.limit&&hard<a.hard;
	}
}x[200010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int T;cin>>T;while(T--){
		ll n,t,a,b;cin>>n>>t>>a>>b;
		ll numa=0,numb=0;
		for(int i=1;i<=n;i++) cin>>x[i].hard,x[i].hard?numb++:numa++;
		for(int i=1;i<=n;i++) cin>>x[i].limit;
		if(numa*a+numb*b<=t) {cout<<n<<endl;continue;}
		sort(x+1,x+n+1);
		ll nowa=0,nowb=0,ans=0;
		for(int i=1;i<=n;i++){
			if(i>1) x[i-1].hard?nowb++:nowa++;
			if(x[i].limit-1>=nowa*a+nowb*b){//has time left
				ll res=i-1;
				ll temp=x[i].limit-1-nowa*a-nowb*b;// if add a[i-1],cal the time left
				if((numa-nowa)*a>=temp) res+=temp/a;// a has the priority
				else res+=numa-nowa+min(numb-nowb,(temp-(numa-nowa)*a)/b);
				ans=max(ans,res);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

