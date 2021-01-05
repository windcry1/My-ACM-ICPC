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
map<char,int> mp;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		mp.clear();
		string s;
		cin>>s;
		string res;
		res+=s[0];
		mp[s[0]]=1;
		bool flag=0;
		for(int i=1;i<s.size();i++){
			if(mp[s[i]]==0){
				mp[s[i]]++;
				if(res.back()==s[i-1]) res+=s[i];
				else if(res.front()==s[i-1]) res=s[i]+res;
				else {
					cout<<1<<endl;
					flag=1;
					break;
				} 
			}
			else if(mp[s[i]]!=0){
				int k;
				for(int j=0;j<res.size();j++){
					if(s[i]==res[j]) k=j;
				}
				if(s[i-1]!=res[k+1]&&s[i-1]!=res[k-1]){
					cout<<2<<" "<<i<<endl;
					flag=1;
					break;
				}
			}
		}
		cout<<res<<endl;
		if(flag) cout<<"NO"<<endl;
		else {
			cout<<"YES"<<endl;
			cout<<res<<endl;
		}
	}
    return 0;
}

