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
int pre[40010];
int a,b,q;
bool judge(int x){
	if((x%a)%b==(x%b)%a) return 0;
	return 1;
}

int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		vector<int> v;
		cin>>a>>b>>q;
		pre[0]=0;
		for(int i=1;i<=a*b;i++){
			pre[i]=pre[i-1]+judge(i);
		}
		for(int i=1;i<=q;i++){
			int l,r;
			cin>>l>>r;
			int m=(l-1)%(a*b),n=r%(a*b);
			int res1=0,res2=0;
			res1+=((l-1)/(a*b))*pre[a*b]+pre[m];
			res2+=(r/(a*b))*pre[a*b]+pre[n];
			v.push_back(res2-res1);
		}
		for(int i=0;i<v.size();i++) cout<<v[i]<<" \n"[i==v.size()-1];
	}
    return 0;
}

