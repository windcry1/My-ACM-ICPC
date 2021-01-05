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
#include<set>
#include<vector>
#include<iomanip>
#include<bitset>
#include<algorithm>
#define ll long long
using namespace std;
int a[30],ans[30];
bool vis[30];
int n;
bool isprime(ll m){
	for(int i=2;i<=sqrt(m);i++)
		if(m%i==0) return 0;
	return 1;
}
void dfs(int pos){
	if(pos==n+1){
		for(int i=1;i<=n;i++){
			cout<<ans[i]<<(i==n?"\n":" ");
		}
		return;
	}
	for(int i=2;i<=n;i++){
		if(!vis[i]&&isprime(ans[pos-1]+a[i])==1){
			if(pos==n){
				if(isprime(a[1]+a[i])==1){
					vis[i]=1; 
					ans[pos]=a[i];
					dfs(pos+1);
					ans[pos]='\0';
					vis[i]=0;
				}
			}
			else{
				vis[i]=1; 
				ans[pos]=a[i];
				dfs(pos+1);
				ans[pos]='\0';
				vis[i]=0;}
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	int t=0;
	while(cin>>n){
		t++;
		memset(vis,0,sizeof vis);
		for(int i=1;i<=n;i++){
			a[i]=i;	
		}
		vis[1]=1,ans[1]=1;
		cout<<"Case "<<t<<":"<<endl;
		dfs(2);
		cout<<endl;
	}
    return 0;
}

