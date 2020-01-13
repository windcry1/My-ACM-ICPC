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
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
using namespace std;
const int INF = 0x3f3f3f3f;
int dp[10010],c[5],v[5];
int a[5],path[5][10010],times[10010];
int main(){
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	//ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;v[1]=1;v[2]=5;v[3]=10;v[4]=25;
	while(~scanf("%d",&t)){
		for(int i=1;i<=4;i++) scanf("%d",&c[i]);
		if(!t and !c[1] and !c[2] and !c[3] and !c[4]) break;
		memset(dp,-INF,sizeof dp);
		dp[0]=0;
		memset(a,0,sizeof a);
		memset(path,0,sizeof path);
		for(int i=1;i<=4;i++){
			memset(times,0,sizeof times);
			for(int j=v[i];j<=t;j++){
				if(dp[j]<dp[j-v[i]]+1 and dp[j-v[i]]>=0 and times[j-v[i]]<c[i]){
					dp[j]=dp[j-v[i]]+1;
					times[j]=times[j-v[i]]+1;
					path[i][j]++;
				}
			}
		}
		if(dp[t]<0) printf("Charlie cannot buy coffee.\n");
		else {
			for(int i=4,j=t;j>0&&i>=1;i--){
				while(path[i][j]){
					a[i]++;
					j-=v[i];
					if(j==0) break;
				}
			}
			printf("Throw in %d cents, %d nickels, %d dimes, and %d quarters.\n",a[1],a[2],a[3],a[4]);
		}
	}	
    return 0;
}
