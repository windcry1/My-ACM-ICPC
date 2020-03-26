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
int a[200010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		bool flag1=0;
		for(int i=1;i<=n;i++) {
			cin>>a[i];}
		for(int i=2;i<=n;i++){
			if(a[i]!=a[i-1]) flag1=1;
		}
		if(!flag1){
			cout<<"1"<<endl;
			for(int i=1;i<=n;i++) cout<<"1 ";
			cout<<endl;
		}
		else{
		if(n%2==0){
			cout<<2<<endl;
			for(int i=1;i<=n/2;i++) {cout<<"1 2";if(i!=n/2) cout<<" ";}
			cout<<endl;
		}
		else{
			bool flag=0;
			int k=0;
			for(int i=1;i<n;i++){
				if(a[i]==a[i+1]){
					flag=1;k=i;break;}
			}
			if(a[1]==a[n]) flag=1;
			if(flag){
				string s1,s2;
				cout<<2<<endl;
			//	cout<<k<<endl;
				for(int i=1;i<=k;i++){
					if((k-i)%2==0) s2+="1 ";
					else s2+="2 ";
				}
				for(int i=k+1;i<=n;i++){
					if((i-k-1)%2==0) s1+="1 ";
					else s1+="2 ";
				}
				cout<<s2<<s1<<endl;
			}
			else {
				cout<<3<<endl;
				for(int i=1;i<=n/2;i++) cout<<"1 2 ";
				cout<<"3"<<endl;}	
			}
		}
	}
    return 0;
}

