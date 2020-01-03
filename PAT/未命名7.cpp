/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/7/2019 1:50:49 PM
*************************************************************************/
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<iostream>
#include<string>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
#include<complex>
#include<stack>
#include<bitset>
#include<iomanip>
#include<list>
#if __cplusplus >= 201103L
#include<unordered_map>
#include<unordered_set>
#endif
#define LL long long
#define ull unsigned long long
using namespace std;
typedef pair<int,int> pii;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
char a[50010],num[50010];
LL dp[50010][25];
int n,m,q;

LL dfs(int pos,int r,bool limit){
	if(pos==-1) return r==0;
	if(!limit && dp[pos][r]!=-1) return dp[pos][r];
	LL res = 0;
	int up;
	if(num[pos]=='?') up = 9;
	else up = limit ? (num[pos]-'0'): 9;
	if(num[pos]=='?'){
		for(int i=0;i<=up;i++){
			res += dfs(pos-1,(r*10+i)%m,limit&&i==up);
		}
	}
	else{
		res += dfs(pos-1,(r*10+(num[pos]-'0'))%m,limit&&(num[pos]-'0')==up);
	}
	if(!limit)
		dp[pos][r] = res;
	return res;
}

LL solve(){
	int pos = 0;
	for(int i=strlen(a)-1;i>=0;i--){
		num[pos++] = a[i];
	}
	return dfs(pos-1,0,1);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T,t;
	memset(dp,-1,sizeof(dp));
	cin>>T;
	while(T--){
		cin>>n>>m>>q;
		cin>>a;
		solve();
		cin>>t;
		int l = 0,r = strlen(a);
		int mid;
		while(l<=r){
			mid = (l+r)>>1;
			if(dp[mid][m]<t)
				r = mid - 1
			else if(dp[mid][m]>t)
				l = mid + 1;
			else break;
		}
		cout<<dp[mid][m]<<endl;
	}
	return 0;
}

