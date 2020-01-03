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
#include<bitset>
#include<algorithm>
#define ll long long
using namespace std;
int a[1000010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		memset(a,0,sizeof a); 
		int n,tot=0;
		cin>>n;
		int Max=0;
		for(int i=1;i<=n;i++){
			int b;
			cin>>b;
			a[b]++;
			tot++;
			Max=max(b,Max);
		}
		if(tot<=3) {
			cout<<"0 0 0"<<endl;continue;}
		int first=0;
		for(int i=Max;i>=1;i--){
			if(a[i]>0){
				first=i;break;
			}
		}
		int sum=0,second=0;
		for(int i=first-1;i>=1;i--){
			if(sum+=a[i]){
				if(sum>a[first]){
					second=i;break;
				}
			}
		}
		int rus=0;
		for(int i=second-1;i>=1;i--){
			rus+=a[i];
			if((a[first]+sum+rus)>tot/2) {rus-=a[i];break;}
		}
		if(rus<a[first]||(sum+a[first])>tot/2) cout<<"0 0 0"<<endl;
		else cout<<a[first]<<" "<<sum<<" "<<rus<<endl;
	}
    return 0;
}
