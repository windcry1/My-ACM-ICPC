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
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		int len=s.size();int flag=0;
		for(int i=1;i<s.size();i++){
			if(s[i]=='0') flag=1; 
		}
		if(flag==0){
		int Min=9;
		for(int i=0;i<len;i++){
			Min=min((s[i]-'0'),Min);
		}
		cout<<Min+(len-1)*9<<endl;}
		else{
			cout<<(len-1)*9<<endl;
		} 
	}	
    return 0;
}

