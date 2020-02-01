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
bool vis[100][100];
ll dp[100][100];
int dir[2][2]={-1,0,0,-1};
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int xb,yb,xc,yc;
	cin>>xb>>yb>>xc>>yc;
	int t=max(xb,yb);
	memset(dp,0,sizeof dp);
	dp[1][1]=1;
	xc++;yc++;xb++,yb++;t++;
	vis[xc][yc]=1;
	vis[xc+1][yc+2]=1;
	if(yc>=2) vis[xc+1][yc-2]=1;
	vis[xc-1][yc+2]=1;
	if(yc>=2)vis[xc-1][yc-2]=1;
	vis[xc+2][yc+1]=1;
	vis[xc+2][yc-1]=1;
	if(xc>=2)vis[xc-2][yc+1]=1;
	if(xc>=2)vis[xc-2][yc-1]=1;
    for(int i=1;i<=t;i++){
    	for(int j=1;j<=t;j++){
    		if(vis[i][j]==0){
    		for(int k=0;k<=1;k++){
    			int dx=i+dir[k][0];
    			int dy=j+dir[k][1];
    			if(vis[dx][dy]==0){
//    				cout<<dp[i][j]<<" "<<dp[dx][dy]<<" ";
    				ll t=dp[dx][dy];
    				dp[i][j]=dp[i][j]+t;
//    				cout<<i<<" "<<j<<" "<<dx<<" "<<dy<<" "<<dp[dx][dy]<<" "<<dp[i][j]<<endl;
					}
				}
			}
		}
	}
//	for(int i=1;i<=t;i++){
//		for(int j=1;j<=t;j++) cout<<dp[i][j]<<endl;
//	}
	cout<<dp[xb][yb]<<endl;
	return 0;
}

