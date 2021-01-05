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
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll n;
	cin>>n;
	ll t;
	if(n==1) {cout<<1<<endl;return 0;}
	for(ll i=0;i<=50;i++){
		if((1ll<<i)>n) {t=i;break;} 
	}
	t--;
	ll sum=(1ll<<t)-1;
	cout<<sum+(1ll<<t)<<endl;
    return 0;
}

