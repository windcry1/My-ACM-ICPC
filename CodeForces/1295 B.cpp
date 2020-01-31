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
int a[100010]; 
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		string s;
		cin>>s;
		int num0=0,num1=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='0') num0++;
			else num1++;
			a[i]=num0-num1;
		}
		if(x==0&&num0==num1) cout<<-1<<endl;
		else if(num0-num1==0) {
			bool flag=0;
			for(int i=0;i<s.size();i++){
				if(a[i]==x) flag=1;
			}
			if(flag) cout<<-1<<endl;
			else cout<<0<<endl;
		}
		else{ 
			int b=num0-num1,res=0; 
			if(x==0) res=1;
			for(int i=0;i<s.size();i++){
				if(x==a[i]||x!=a[i]&&b!=0&&(x-a[i])%b==0&&x>a[i]&&b>0||b!=0&&x!=a[i]&&(x-a[i])%b==0&&x<a[i]&&b<0) res++;
			}
			cout<<res<<endl;
		}
	}
    return 0;
}

