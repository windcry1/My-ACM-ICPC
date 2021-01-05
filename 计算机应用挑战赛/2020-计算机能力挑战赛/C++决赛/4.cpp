#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	string s,y;cin>>s>>y;
	string t[2];
	int flag;
	for(int i=0,n=s.size();i<n;i++){
		if(s[i]=='[') {
			t[0]="",t[1]="",flag=0;
			continue;
		}
		if(s[i]=='-') {
			flag=1;
			continue;
		}
		if(s[i]==']') {
			if(t[0]==y)
				cout<<t[1]<<" ";
			else if(t[1]==y)
				cout<<t[0]<<" ";
			continue;
		}
		t[flag] += s[i];
	}
	cout<<endl;
	return 0;
}
