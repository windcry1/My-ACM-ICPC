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
string s[110];string ss="yizhong";
bool vis[110][110];
int dir[8][2]={1,0,0,1,-1,0,0,-1,1,1,1,-1,-1,1,-1,-1};
int t;
bool dfs(int c,int b,int d,int cnt){
	if(cnt==7) return 1;
	int dx=c+dir[d][1],dy=b+dir[d][0];
	if(dx<0&&dy<0&&dx>=t&&dy>=t) return 0;
	if(ss[cnt]==s[dx][dy]){
		cnt++;
		if(dfs(dx,dy,d,cnt)){
			vis[dx][dy]=1;
			return 1;
		}
	}
	return 0;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int t;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>s[i];
	}
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			if(s[i][j]=='y'){
				for(int k=0;k<=7;k++){
					if(dfs(i,j,k,1)) vis[i][j]=1;
				}
			}
		}
	}
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			if(vis[i][j]) cout<<s[i][j];
			else cout<<"*";
		}
		cout<<endl;
	}
    return 0;
}

