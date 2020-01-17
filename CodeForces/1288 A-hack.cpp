#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <iomanip>
//#include <unordered_map>
//#include <unordered_set>
using namespace std;
#define fi first
#define se second
#define ll long long
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
#define mem(a,b) memset(a,b,sizeof(a))
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
const int INF = 0x3f3f3f3f;
 
double a,b;
 
int check(int x){
	if(x+ceil(b/(x+1))<=a)
		return 1;
	else
		return 0;
}
int main() {
	#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	IOS;
	int t;
	cin>>t;
	int res=0;
	while(t--){
		int f=0;
		cin>>a>>b;
		if(a>=b){
			cout<<"YES"<<endl;
			continue;
		}
		int l=0,r=a;
		while(r>l){
			int mid=(l+r)/2;
			if(check(mid)){
				f=1;
				r=mid;
			}else{
				l=mid+1;
			}
		}
		//if(f) cout<<"YES"<<endl;
		//else cout<<"NO"<<endl;
		res+=!f;
	}
	cout<<res<<endl;
	return 0;
}
