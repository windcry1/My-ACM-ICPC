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
#include<bitset>
#include<algorithm>
#define ll long long
using namespace std;
char s[1000010];
int len;
void insert(int pos,char c){
	for(int i=len;i>pos;i--) s[i]=s[i-1];
	s[pos]=c;
}
void erase(int pos){
	for(int i=pos;i<len;i++) s[i]=s[i+1];
	s[len]='\0';
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	while(cin>>s){
		len=strlen(s);
		int res=0,ans=0;
		for(int i=0;i<len-3;i++){
			if(s[i]=='C'&&s[i+1]=='C'&&s[i+2]=='P'&&s[i+3]=='C') ++ans;
		}
		res=max(res,ans);
		for(int i=0;i<=len;i++){
			ans=0;
			insert(i,'P');
			for(int i=0;i<len+1-3;i++){
				if(s[i]=='C'&&s[i+1]=='C'&&s[i+2]=='P'&&s[i+3]=='C') ++ans;
			}
			erase(i);
			if(res==ans-1) {
				res=ans;
				break;
			}
			ans=0;
			insert(i,'C');
			for(int i=0;i<len+1-3;i++){
				if(s[i]=='C'&&s[i+1]=='C'&&s[i+2]=='P'&&s[i+3]=='C') ++ans;
			}
			erase(i);
			if(res==ans-1) {
				res=ans;
				break;
			}
		}
		cout<<res<<"\r\n";
	}
    return 0;
}

