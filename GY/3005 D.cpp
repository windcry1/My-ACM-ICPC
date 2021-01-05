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
string s3[100010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	string s,s2;
	cin>>s;
	int cnt=1;
	for(int i=0;i<s.size();i++){
		if(s[i]=='+'){
			cnt++;
		}
		else s2+=s[i];
	}
	sort(s2.begin(),s2.end());
	for(int i=0;i<s2.size();i++){
		s3[i%cnt]+=s2[i];
	}
	for(int i=0;i<=cnt;i++){
		reverse(s3[i].begin(),s3[i].end());
	}
	int t=(int)s2.size()/cnt;
	if(s2.size()%cnt!=0){
		t++;
		for(int i=0;i<cnt;i++){
			while((int)s3[i].size()<t) s3[i]+="0";
		} 
	}
	int a=0;
	string res;
	for(int i=0;i<t;i++){
		for(int j=0;j<cnt;j++){
			a+=s3[j][i]-'0';
			if(j==cnt-1&&i!=t-1){ 
				res.push_back(a%10+'0');
			}
			if(j==cnt-1&&i==t-1){
				string s5=to_string(a);
				reverse(s5.begin(),s5.end());
				res+=s5;
			}
		}
		a=a/10; 
	}
	reverse(res.begin(),res.end()); 
	cout<<res<<endl;
    return 0;
}

