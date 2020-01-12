/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 11:03:37 PM
*************************************************************************/
#include<iostream>
#include<vector>
using namespace std;
vector<int> prime;
bool vis[210];
int dp[210];
void init(){
    for(int i=2;i<=200;i++){
        if(!vis[i]) prime.push_back(i);
        for(int j=0;j<(int)prime.size()&&i*prime[j]<=200;j++) {
            vis[i*prime[j]]=1;
            if (i%prime[j]==0) break;
        }
    }
}
int main(){
	init();
	dp[0]=1;
	for(int i=0;i<prime.size();i++){
		for(int j=prime[i];j<=200;j++){
			dp[j]+=dp[j-prime[i]];
		}
	}
	int n;while(cin>>n){
		cout<<dp[n]<<endl;
	}
	return 0;
}


