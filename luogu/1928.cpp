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
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	string s,s1;
	cin>>s;
	int cnt=1;
	for(int i=0;i<s.size();i++){
		if(s[i]=='['){
			string s2,s3;
			i++;
			while(1){
				bool flag=0;
				if(s[i]==']') break;
				else if(s[i]=='[') {i++;continue;}
				else if(s[i]<='Z'&&s[i]>='A') s2+=s[i];
				else if((s[i]<='9'&&s[i]>='0')&&(s[i+1]<='9'&&s[i+1]>='0')){
					cnt*=(s[i]-'0')*10+s[i+1]-'0';
					flag=1;
				}
				else if(s[i]<='9'&&s[i]>='0'){
					cnt*=s[i]-'0';
				}
				i++;
				if(flag) i++;
			}
			for(int j=1;j<=cnt;j++) s1+=s2;
			cnt=1;
		}
		else if(s[i]==']') continue;
		else s1+=s[i];
	}
	cout<<s1<<endl;
    return 0;
}

