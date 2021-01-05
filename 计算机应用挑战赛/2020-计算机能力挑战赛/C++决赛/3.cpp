#include<bits/stdc++.h>
using namespace std;
struct node{
	string name,id,unit;
	double ave;
	int sa;
	int month;
}t[1010];
bool cmp1(node a,node b){
	return a.sa>b.sa;
}
bool cmp2(node a,node b){
	return a.ave>b.ave;
}
bool cmp3(node a,node b){
	return a.sa*a.month>b.sa*b.month;
}
int main(){
	ios::sync_with_stdio(false);
	int n,m;cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>t[i].name>>t[i].id>>t[i].ave>>t[i].unit>>t[i].sa>>t[i].month;
	sort(t,t+n,cmp1);
	for(int i=0;i<m;i++)
		cout<<t[i].ave<<" \n"[i==m-1];
	sort(t,t+n,cmp2);
	for(int i=0;i<m;i++)
		cout<<t[i].id<<" \n"[i==m-1];
	sort(t,t+n,cmp3);
	for(int i=0;i<m;i++)
		cout<<t[i].unit<<" \n"[i==m-1];
	return 0;
}
