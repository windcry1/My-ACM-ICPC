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
int cnt[40];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>a[i];
	}
	for(int i=1;i<=t;i++){
		for(int j=0;j<30;j++){
			if(a[i]&(1<<j)){
				cnt[j]++;
			}
		}
	}
	int k=1,mmax=-1;
	for(int i=1;i<=t;i++){
		for(int j=0;j<30;j++){
			if(a[i]&(1<<j)&&cnt[j]==1){
				if(j>mmax) mmax=j,k=i;
			}
		}
	}
	cout<<a[k];
	for(int i=1;i<=t;i++){
		if(i==1) cout<<" ";
		if(i!=k) cout<<a[i];
		if(i!=k&&i!=t) cout<<" ";
	} 
	cout<<endl;
    return 0;
}

