#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<ctime>
#include<iostream>
#include<string>
#include<map>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<iomanip>
#include<list>
#include<bitset>
#include<sstream>
#include<fstream>
#include<complex>
#include<algorithm>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
using namespace std;
const int INF = 0x3f3f3f3f;
int n,d;
int check(int x){
	if((x+ceil((double)d/(x+1)))<=n) return 1;
	else return 0;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	int res=0;
	int t;cin>>t;
	while(t--){
		cin>>n>>d;
		int l=0,r=n;
		bool flag=0;
		while(l<r){
			int mid=(l+r)/2;
			if(check(mid)){
				flag=1;
				cout<<"YES"<<endl;
				break; 
			}
			if(mid>=sqrt(2*d)-1){
				l=mid;
			}
			else r=mid;
		}
		if(!flag) ++res;
	}
	cout<<res<<endl;
    return 0;
}

