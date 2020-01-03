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
bool vis[200];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		string s;
		memset(vis,0,sizeof vis);
		cin>>s;
		int flag1=0,flag2=0,flag3=0,flag4=0;
		if(s.size()<=1) cout<<"No\r\n";
		else{int cnt1=0,cnt2=0;
			for(int i=0;i<s.size()-1;i++){
				if(i>0&&s[i-1]=='A'&&s[i]=='K'&&s[i+1]=='A'&&!vis[i-1]&&!vis[i]&&!vis[i+1]){
				vis[i-1]=1;vis[i]=1;vis[i+1]=1;flag3=1;cnt1++;}
				if(i>0&&s[i-1]=='K'&&s[i]=='A'&&s[i+1]=='K'&&!vis[i-1]&&!vis[i]&&!vis[i+1]){
				vis[i-1]=1;vis[i]=1;vis[i+1]=1;flag4=1;cnt2++;}
			}
		for(int i=0;i<s.size()-1;i++){
			if(s[i]=='A'&&s[i+1]=='K'&&!vis[i]&&!vis[i+1]){
				vis[i]=1;vis[i+1]=1;flag1=1;
			}
			else if(s[i]=='K'&&s[i+1]=='A'&&!vis[i]&&!vis[i+1]){
				vis[i]=1;vis[i+1]=1;flag2=1;
			}
			
		}
		//cout<<flag1<<" "<<flag2<<" "<<flag3<<endl;
		if(cnt1>=2||cnt2>=2||flag1==1&&flag2==1||flag1==1&&flag3==1||flag1==1&&flag4==1||flag2==1&&flag3==1||flag2==1&&flag4==1||flag3==1&&flag4==1)
			cout<<"Yes\r\n";
		else
			cout<<"No\r\n";
		}
	}
    return 0;
}

