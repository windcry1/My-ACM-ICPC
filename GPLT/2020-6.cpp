#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	#ifdef WindCry1
		freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
	#endif
	string s="chi1 huo3 guo1";
	string f,t;
	int cnt=0,tot=0,first=0;
	while(getline(cin,t)) {
		if(t==".") break;
		if(t.find(s)!=string::npos){
			++cnt;
			if(!first) first=tot+1;
		}
		++tot;
	}
	if(first) cout<<tot<<endl<<first<<" "<<cnt<<endl;
	else cout<<tot<<endl<<"-_-#"<<endl;
	return 0;
}
