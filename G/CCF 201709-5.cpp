//#pragma GCC optimize(3)
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
int a[100010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int m,n;
	cin>>m>>n;
	int k=1;
	while(k<=m){
		cin>>a[k++];
	}
	while(n--){
		int t;
		cin>>t;
		if(t==1){
			int l,r,v;
			cin>>l>>r>>v;
			if(v==1) continue;
			while(l<=r){
				if(a[l]<v){
					l++;
					continue;
				}
				if(a[l]%v==0) a[l]=a[l]/v;
				l++;
			}
		}
		if(t==2){
			int l,r;
			cin>>l>>r;
			ll sum=0;
			while(l<=r){
				sum+=a[l];
				l++;
			}
			cout<<sum<<endl;
		}
	}	
    return 0;
}

