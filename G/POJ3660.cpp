#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<ctime>
#include<iostream>
using namespace std;
const int INF = 0x3f3f3f3f;
int p[110][110];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			p[i][j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		int a,b;
		cin>>a>>b;
		p[a][b]=1;
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(p[i][k]&&p[k][j]) p[i][j]=1;
			}
		}
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		int con1=0,con2=0;
		for(int j=1;j<=n;j++){
			if(p[i][j]) con1++;
			if(p[j][i]) con2++;
		}
		if(con1+con2==n-1) cnt++;
	}
	cout<<cnt<<endl;
    return 0;
} 
