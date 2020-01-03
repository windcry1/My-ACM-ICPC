/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/29/2019 5:36:28 PM
*************************************************************************/
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <complex>
#include <stack>
#include <bitset>
#include <iomanip>
#include <list>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int MMAX = 0x7fffffff;
const int INF = 0xfffffff;
const int mod = 1e9+7;
int dis[310][310];
int MAX,MIN=MMAX;
int h[310],c[310];
bool vis[310];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,s;cin>>n>>s;
	memset(dis,127/3,sizeof(dis));
	for(int i=1;i<=n;i++) dis[i][i]=0;
	for(int i=1;i<n;i++){
		int x,y,z;
		cin>>x>>y>>z;
		dis[x][y]=dis[y][x]=z;
	}
	for(int k=1;k<=n;k++)
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				if(dis[i][j]>dis[i][k]+dis[k][j]){
	    			dis[i][j]=dis[i][k]+dis[k][j];
	    			if(dis[i][j]>MAX) MAX=dis[i][j];
	    		}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(dis[i][j]==MAX)
				for(int k=1;k<=n;++k)
					if(dis[i][k]+dis[k][j]==dis[i][j]) vis[k]=true;
	int maxn;
	for(int i=1;i<=n;i++)
		for(int j=i;j<=n;j++)
			if(vis[i]&&vis[j]&&dis[i][j]<=s){
				memset(c,127,sizeof(c));
				for(int k=1;k<=n;k++)
					if(dis[i][k]+dis[k][j]==dis[i][j])
	    	    		for(int l=1;l<=n;l++)
	    	      			if(dis[k][l]<c[l]) c[l]=dis[k][l];
	    		maxn=0;
	    		for(int k=1;k<=n;k++) maxn=max(maxn,c[k]);
				MIN=min(MIN,maxn); 
	    	}
	printf("%d",MIN);
	return 0;
}

