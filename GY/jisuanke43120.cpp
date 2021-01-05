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
ll d[2000010];
set<ll> st;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll a,b,c;
	cin>>a>>b>>c;
	d[0]=1;
	st.insert(1);
	bool flag=0;int res=0;
	for(int i=1;i<=2000001;i++){
		if(i==2000001) flag=1;
		d[i]=(a*d[i-1]+d[i-1]%b)%c;
		if(st.count(d[i])==1) {
			res=i;
			break;
		}
		else st.insert(d[i]);
	}
	if(flag) cout<<-1<<endl;
	else cout<<res<<endl;
    return 0;
}

