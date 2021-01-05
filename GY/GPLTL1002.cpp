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

int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	string s;
	cin>>s;
	int cnt=1;
	int cnt2=0;
	for(int i=1;i<=n;i++){
		cnt+=2*(2*i+1);
		if(cnt>n){
			cnt-=2*(2*i+1);
			cnt2=(i-1);
			break;
		}
	}
//	cout<<cnt<<endl;
	for(int i=cnt2;i>=1;i--){
		int k=i*2+1;
		int k2=(cnt2*2+1-k)/2;
		while(k2--) cout<<" ";
		while(k--){
			if(k!=0) cout<<s;
			else cout<<s;
		}//cout<<1<<endl;
		k2=(cnt2*2+1-k)/2;
		//while(k2--) cout<<" ";
		cout<<endl;
	}
	int a=cnt2;
	while(a--) cout<<" ";
	cout<<s;
	a=cnt2+1;
	//while(a--) cout<<" ";
	cout<<endl;
	for(int i=1;i<=cnt2;i++){
		int k=i*2+1;
		int k2=(cnt2*2+1-k)/2;
		while(k2--) cout<<" ";
		while(k--){
			if(k!=0) cout<<s;
			else cout<<s;
		}
		 k2=(cnt2*2+1-k)/2;
		//while(k2--) cout<<" ";
		cout<<endl;
	}
	cout<<n-cnt<<endl;
    return 0;
}

