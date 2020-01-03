#include<bits/stdc++.h>
using namespace std;
bool flag[26];
int pre[26];
int find(int x){
    int r=x;
	while(pre[r]!=r) r=pre[r];
	return r;
}
void join(int x,int y){
    int fx=find(x),fy=find(y);
    if(fx!=fy) pre[fx]=fy;
}
void init(){
	for(int i=0;i<26;i++) pre[i]=i;
}
int main(){
	ios::sync_with_stdio(false);
	int n;cin>>n;
	init();
	int res=0;
	for(int i=0;i<n;i++){
		string s;cin>>s;
		flag[s[0]-'a']=1;
		for(int i=1;i<s.size();i++){
			join(s[0]-'a',s[i]-'a');
			flag[s[i]-'a']=1;
		}
	}
	for(int i=0;i<26;i++)
		if(find(i)==i&&flag[i]) res++;
	cout<<res<<endl;
	return 0;
}
/*
3
aaa
bbb
ab 
*/ 

