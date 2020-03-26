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
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;

signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	if(n>m||(m-n)%2==1) cout<<-1<<endl;
	else if(n==m) cout<<(n==0?0:1)<<endl;
	
	else if((((n+m)/2)^((m-n)/2))==n){
		cout<<((n+m)/2)<<" "<<(m-n)/2<<endl;
		cout<<2<<endl;
		cout<<m-(m-n)/2<<" "<<(m-n)/2<<endl; 
	}
	else cout<<3<<endl<<m-2*(m-n)/2<<" "<<(m-n)/2<<" "<<(m-n)/2<<endl; 
    return 0;
}

