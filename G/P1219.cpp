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
int n,cnt=0;
bool vis[20][20];
bool judge(int x,int y){
	bool flag=0;
	int a=x,b=y;
	if(vis[a][b]) flag=1;
	while(1){
		if(vis[a][b]==1) {
			flag=1;break;
		}
		a++;b++;
		if(a>n||b>n) break;
	}
	a=x,b=y;
	while(1){
		if(vis[a][b]==1) {
			flag=1;break;
		}
		a--;b--;
		if(a<1||b<1) break;
	}
	a=x,b=y; 
	while(1){
		if(vis[a][b]==1) {
			flag=1;break;
		}
		a++;b--;
		if(a<1||b<1) break;
	}
	a=x,b=y;
	while(1){
		if(vis[a][b]==1) {
			flag=1;break;
		}
		a--;b++;
		if(a<1||b<1) break;
	}
	for(int i=1;i<=n;i++){
		if(vis[i][y]) flag=1;
	}
	return flag==1?1:0;
}
void dfs(int x,int y){
	if(x==n){
		cnt++;
		if(cnt<=3) {
			for(int j=1;j<=n;j++)
				for(int i=1;i<=n;i++){
					if(vis[j][i]==1) cout<<i<<(j==n?"":" ");
				}
			cout<<endl;
		}	
	}
	for(int i=1;i<=n;i++){
		if(judge(x+1,i)==0) {
			vis[x+1][i]=1;
			dfs(x+1,i);
			vis[x+1][i]=0;
		}
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		vis[1][i]=1;
		dfs(1,i);
		vis[1][i]=0;
	}
	cout<<cnt<<endl;
    return 0;
}

