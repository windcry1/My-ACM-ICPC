#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T;cin>>T;while(T--){
		string s,res;cin>>s;
		res+=s[0];
		map<char,int> mp;
		int pos=0;
		bool ok=false;
		for(int i=1;i<s.size();i++){
			if(pos>0&&pos<res.size()-1){
				if(res[pos-1]!=s[i]&&res[pos+1]!=s[i]){cout<<"NO"<<endl;ok=true;break;}
				if(res[pos-1]==s[i]) pos--;
				else pos++;
				continue;
			}
			if(pos==0){
				if(res[pos+1]==s[i]) pos++;
				else res=s[i]+res;
			}else{
				if(res[pos-1]==s[i]) pos--;
				else res+=s[i],pos++;
			}
		}
		if(ok) continue;
		for(int i=0;i<res.size();i++){
			mp[res[i]]++;
			if(mp[res[i]]>1) {
				cout<<"NO"<<endl;
				ok=true;
				break;
			}
		}
		if(!ok){
			cout<<"YES"<<endl;
			cout<<res;
			for(char i='a';i<='z';i++){
				if(!mp[i]) cout<<i;
			}
			cout<<endl;
		}
	}
	return 0;
}


