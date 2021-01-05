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
int a[110][110],b[110][110];
int way[2][2]={1,0,1,1};
int n;
int dfs(int x,int y){
	if(x==n) return b[x][y]=a[x][y];
	if(b[x][y]) return b[x][y];
	int max1=0;
	for(int i=0;i<=1;i++){
		int dx=x+way[i][0];
		int dy=y+way[i][1];
		if(dy>0&&dy<=dx){
			max1=max(max1,dfs(dx,dy)+a[x][y]);
		}
	}
	return b[x][y]=max1;
}
int main(){
	ios::sync_with_stdio(false);
	int t;cin>>t;
	while(t--){
		memset(b,0,sizeof b);
		int m=1;cin>>n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
			}
			m++;
		}
		cout<<dfs(1,1)<<endl;
	}
    return 0;
}

