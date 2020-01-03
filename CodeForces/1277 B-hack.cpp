/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/14/2019 8:19:49 PM
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
struct node{
	int num2,val;
	bool operator <(const node &a) const{
		return val>a.val;
	}
}x[200010];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int T;cin>>T;while(T--){
		int n;cin>>n;
		for(int i=0;i<n;i++){
			cin>>x[i].val;
			x[i].num2=0;
			while(x[i].val%2==0){
				x[i].val/=2;
				x[i].num2++;
			}
		}
		sort(x,x+n);
		int ans=0,tmp=0;
		for(int i=0;i<n;i++){
			if(i==0){
				tmp=x[0].num2;
				continue;
			}
			if(x[i].val==x[i-1].val)
				tmp=max(tmp,x[i].num2);
			else {
				ans+=tmp;
				tmp=x[i].num2;
			}
		}
		cout<<ans+tmp<<endl;
	}
	return 0;
}

