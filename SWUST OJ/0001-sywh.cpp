#include<bits/stdc++.h>
using namespace std;
int way[4][2]={1,0,-1,0,0,1,0,-1};
char pho[1005][85];
int w,h;
int sum;
void dfs(int i,int j){
	for(int k=0;k<4;k++){
		int x=i+way[k][0];
		int y=j+way[k][1];
		if(x>=0&&x<h&&y>=0&&y<w&&pho[x][y]=='*'){
			sum++;
			pho[x][y]='.';
			dfs(x,y);
		}
	}
}
int main(){
	int ans=-1;
	cin>>w>>h;
	for(int i=0;i<h;i++){
		scanf("%s",pho[i]);
	}
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(pho[i][j]=='*'){
				sum=1;
				pho[i][j]='.';
				dfs(i,j);
				ans=max(ans,sum);
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}

