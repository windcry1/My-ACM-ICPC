/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 11:03:37 PM
*************************************************************************/
#include<bits/stdc++.h>
using namespace std;
vector<int> prime;
bool vis[10010];
int Prime(int n){
	for(int i=2;;i++){
		if(!vis[i]) prime.push_back(i);
		for(int j=0;j<prime.size()&&i*prime[j]<=n;j++){
			vis[i*prime[j]]=1;
			if(i%prime[j]==0)
			break;
		}
		if(prime.size()==n+1) return (int)prime.size();
	}
}
int main(){
	Prime(10000);
	int n;while(cin>>n) cout<<prime[n-1]<<endl;
	return 0;
}


