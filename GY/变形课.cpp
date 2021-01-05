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
string s[1000];
int w[1000];
int k;
int flag;
void dfs(int x,char a){
	if(s[x].back()=='m') flag=1;
	for(int i=0;i<k;i++){
		if(w[i]==0&&s[i].front()==a){
			w[i]=1;
			dfs(i,s[i].back());
			w[i]=0;
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	int i=0; 
	while(cin>>s[0]){
		flag=0;
		while(1){
			cin>>s[++i];
			if(s[i][0]=='0'){
				k=i;i=0;break;
			}
		}
		dfs(0,'b');
		cout<<(flag?"Yes.":"No.")<<endl; 
	}
    return 0;
}
/////////////////////////////////////////
