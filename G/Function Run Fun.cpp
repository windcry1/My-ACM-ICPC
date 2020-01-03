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
ll a,b,c;
ll w[25][25][25];
int dfs(int a,int b,int c){
	if(a<=0||b<=0||c<=0) return 1;
	if(a>20||b>20||c>20) return dfs(20,20,20);
	if(w[a][b][c]) return w[a][b][c];
	if(a<b&&b<c){
		return w[a][b][c]=(dfs(a, b, c-1)+dfs(a, b-1, c-1)-dfs(a, b-1, c));
	}
	else return w[a][b][c]=(dfs(a-1, b, c)+dfs(a-1, b, c-1)+dfs(a-1, b-1, c)-dfs(a-1, b-1, c-1));
}
int main(){
	ios::sync_with_stdio(false);
	while(cin>>a>>b>>c){
		if(a==-1&&b==-1&&c==-1) break;
		cout<<"w("<<a<<","<<b<<","<<c<<") = "<<dfs(a,b,c)<<endl;
	}
    return 0;
}

