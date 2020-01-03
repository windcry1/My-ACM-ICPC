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
int a[100];string s[100]; 
int main(){
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		map<string,int> mp;
		int n;cin>>n;
		for(int i=0;i<n;i++){
			cin>>s[i];
			a[s[i][0]-'0']++;
			mp[s[i]]++;
		}
		int k=0;
		for(int i=0;i<n;i++){
			if(mp[s[i]]>1){
				mp[s[i]]--;a[s[i][0]-'0']--;
				k++;
				for(int j=0;j<=9;j++){
					if(!a[j]){
						a[j]++;
						s[i][0]=j+'0';
						break;
					}
				}
			}
		}
		for(auto i:mp){
			cout<<k<<endl;
			if(i.second==1) cout<<i.first<<endl;
		}
	}
    return 0;
}

