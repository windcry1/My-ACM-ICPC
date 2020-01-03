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
int a[200010],b[200010];
int vis[200010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		memset(vis,0,sizeof vis);
		memset(b,0,sizeof b);
		int m;
		cin>>m;
		int k=0;
		for(int i=1;i<=m;i++){
			cin>>a[i];
			if(a[i]==1) k=i;
		}
		b[1]=a[k];vis[1]=1;
		int cont=1;
		int l=1,r=1;int Max=0,ne=0;
		if(m==1){
			cout<<1<<endl;
			continue;
		}
		while(1){
			cont++;
			if(k-l<=0){
				ne=k+r;
				r++;
			}
			else if(k+r>m){
				ne=k-l;
				l++;
			}
			else if(a[k+r]<a[k-l]){
				ne=k+r;
				r++;
			} 
			else {
				ne=k-l;
				l++;
			}
			b[cont]=a[ne];
			Max=max(Max,b[cont]);
			if(cont==Max) vis[cont]=1;
			if(cont==m) break;
		}
		for(int i=1;i<=m;i++){
			cout<<vis[i];
		}
		cout<<endl;
	}	
    return 0;
}

