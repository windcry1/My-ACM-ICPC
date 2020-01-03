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
int n,res=0;int a[3][3];
bool vis[10][10];
int way[4][2]={-1,0,1,0,0,-1,0,1};
int dfs(int x,int y,int num){
	if(num==n) return res;
	for(int i=0;i<4;i++){
		int dx=x+way[i][0];
		int dy=y+way[i][1];
		if(dx>=0&&dx<3&&dy>=0&&dy<=2&&a[dx][dy]%num==0&&!vis[dx][dy]){
			num++;
			vis[dx][dy]=1;
			res=res*10+a[dx][dy];
			dfs(dx,dy,num);
			vis[dx][dy]=0;
		}
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,cnt=1;cin>>n;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			a[i][j]=cnt;
			cnt++;
		}
	}
	dfs(0,0,1);
	cout<<res<<endl;
    return 0;
}

