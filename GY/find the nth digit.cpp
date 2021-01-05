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
#include<set>
#include<vector>
#include<iomanip>
#include<bitset>
#include<algorithm>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	ll n;cin>>n;
	while(n--){
		ll a,b,c,k=0;
		cin>>a;
		for(ll i=1;;i++){
			ll sum=(i+1)*i/2;
			if(a<=sum) break;k=i;	
		}
		c=a-(k+1)*k/2;
		cout<<(c%9==0?9:c%9)<<endl;
	}
    return 0;
}

