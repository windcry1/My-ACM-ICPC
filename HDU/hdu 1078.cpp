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
int n,k;
int way[4][2]={-1,0,1,0,0,1,0,-1};
int a[100][100],b[100][100];
int dfs(int x,int y){
	if(b[x][y]) return b[x][y];
	int max1=a[x][y];
	for(int i=0;i<4;i++){
		for(int j=1;j<=k;j++) {
			int dx=x+way[i][0]*j;
			int dy=y+way[i][1]*j;
			if(dx>=0&&dx<n&&dy>=0&&dy<n&&(a[dx][dy]>a[x][y]))
				max1=max(max1,dfs(dx,dy)+a[x][y]);
		}
	}
	return b[x][y]=max1;
}
int main(){
	ios::sync_with_stdio(false);
	while(cin>>n>>k){
		memset(b,0,sizeof b); 
		if(n==-1&&k==-1) break;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		} 
		cout<<dfs(0,0)<<endl;
	} 
    return 0;
}

