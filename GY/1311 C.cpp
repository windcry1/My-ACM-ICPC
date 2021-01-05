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
int v[200010][30];
int res[30];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		string s;
		cin>>s;
		for(int i=1;i<=m;i++) cin>>a[i];
		memset(res,0,sizeof res);
		for(int i=0;i<26;i++) v[0][i]=0;
		v[0][s[0]-'a']=1;
		res[s[0]-'a']=1;
		for(int i=1;i<s.size();i++){
			for(int j=0;j<26;j++){
				if(s[i]-'a'==j) v[i][j]=v[i-1][j]+1;
				else v[i][j]=v[i-1][j];
			}
			res[s[i]-'a']++;	
		}
		for(int i=1;i<=m;i++){
			for(int j=0;j<26;j++){
				res[j]+=v[a[i]-1][j];
			}
		}
		for(int i=0;i<26;i++) cout<<res[i]<<" \n"[i==25]; 
	}
    return 0;
}

