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
char s[1020];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		int c=0,d=0,a=0,b=0,e=0;
		for(int i=0;i<strlen(s);i++){
			if(s[i]=='P'){
				c=i;
				a++;
			}
			if(s[i]=='T'){
				b=i;
				e++;
			}
			if(s[i]!='P'&&s[i]!='A'&&s[i]!='T') d=1;
		}
		if(a!=1||e!=1||c>b||b==c+1) d=1;
		if(c*(b-c-1)!=(strlen(s)-b-1)) d=1;
		if(d==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
    return 0;
}

