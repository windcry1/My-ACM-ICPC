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
int a[200010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int cnt=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='L'){
				a[cnt]++;
			}
			if(s[i]=='R'){
				cnt++;
			}
		}
		sort(a,a+cnt+1);
		cout<<a[cnt]+1<<endl;
	}
    return 0;
}

