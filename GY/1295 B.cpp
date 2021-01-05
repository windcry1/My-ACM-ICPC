#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int INF=0x3f3f3f;
const int N=1e5+5;
int dp[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		memset(dp,0,sizeof dp);
		int n,x,ans=0;
		cin>>n>>x;
		string s;
		cin>>s;
		bool flag=0;
		if(s[0]=='0') dp[0]=1;
		else dp[0]=-1;
		for(int i=1;i<n;i++){
			if(s[i]=='0')
				dp[i]=dp[i-1]+1;
			else
				dp[i]=dp[i-1]-1;
			if((x%dp[i]==0&&x!=0&&dp[i]!=0)||(x==dp[i]))
				ans++;
		}
		if(x==0){
			ans++;
			for(int i=0;i<n;i++)
				if(dp[i]!=0){
					flag=1;
					break;
				}
			if(!flag)
			cout<<"-1"<<endl;
			else
				cout<<ans<<endl;
		}
		else
			cout<<ans<<endl;
	}
	return 0;
}

