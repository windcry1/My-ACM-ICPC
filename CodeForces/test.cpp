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
bool flag[10];
int a[10];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	string s;
	getline(cin,s);
	int cnt=0;
	int k=0;
	for(int i=0;i<s.size();i++){
		if(s[i]==' '){
			cnt++;
			if(cnt>1) break;
			for(int j=k;j<i;j++){
				a[cnt]=a[cnt]*10+s[j]-'0';
				if(s[j]<'0'||s[j]>'9') flag[cnt]=1;
			}
			k=i+1;
		}
	}
	if(!flag[0]){
		cnt++;
		for(int j=k;j<s.size();j++){
			a[cnt]=a[cnt]*10+s[j]-'0';
			if(s[j]<'0'||s[j]>'9') flag[cnt]=1;
		}
	}
	if(a[1]>1000||a[1]<1) flag[1]=1;
	if(a[2]>1000||a[2]<1) flag[2]=1;
	if(flag[0]||(flag[1]&&flag[2])) cout<<"? + ? = ?"<<endl;
	else if(flag[1]){
		cout<<"? + "<<a[2]<<" = ?"<<endl;
	}
	else if(flag[2]){
		cout<<a[1]<<" + ? = ?"<<endl;
	}
	else{
		cout<<a[1]<<" + "<<a[2]<<" = "<<a[1]+a[2]<<endl;
	}
    return 0;
}

