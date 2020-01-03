#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;cin>>T;
	while(T--){
		int n,vis[30]={0},res=0;
		string s[30];
		map<string,int> mp;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>s[i];
			mp[s[i]]++;
			vis[s[i][0]-'0']++;
		}
		for(int i=0;i<n;i++){
			if(mp[s[i]]>1){
				res++;
				mp[s[i]]--; vis[s[i][0]-'0']--;
				for(int j=0;j<=9;j++){
					if(!vis[j]){
						vis[j]++;
						s[i][0]=j+'0';
						break;
					}
				}	
			}
		}
		cout<<res<<endl;
		for(int i=0;i<n;i++) cout<<s[i]<<endl;
	}
	return 0;
}

