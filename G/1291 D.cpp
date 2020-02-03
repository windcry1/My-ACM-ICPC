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
int pos[200010][30];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		for(int j=0;j<26;j++) pos[i+1][j]=pos[i][j];
		 pos[i+1][s[i]-'a']++;
	}
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int l,r;
		cin>>l>>r;
		if(l==r) cout<<"Yes"<<endl;
		else{
			vector<int> v;
			for(int j=0;j<26;j++){
				if(pos[r][j]-pos[l-1][j]>0) v.push_back(pos[r][j]-pos[l-1][j]);
			}
			if(v.size()==1 && v[0]>=2) cout<<"No"<<endl;
			else if(v.size()==2){
				if(s[l-1]!=s[r-1]) cout<<"Yes"<<endl;
				else cout<<"No"<<endl;
			}
			else cout<<"Yes"<<endl;
		}
	}
    return 0;
}
