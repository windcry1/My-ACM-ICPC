#include<bits/stdc++.h>
using namespace std;
struct node{
	int pos,data,next;
}a[100010],res[100010];
int main(){
	int st,n,k;scanf("%d%d%d",&st,&n,&k);
	for(int i=0;i<n;i++){
		int u,v,w;scanf("%d%d%d",&u,&v,&w);
		a[u].pos=u;a[u].data=v;a[u].next=w;
	}
	int cnt=0;
	for(int i=st;i!=-1;i=a[i].next)
		res[cnt++]=a[i];
	for(int l=0,r=k;r<=cnt;l+=k,r+=k)
		reverse(res+l,res+r);
	for(int i=0;i<cnt;i++){
		if(i!=cnt-1) printf("%05d %d %05d\n",res[i].pos,res[i].data,res[i+1].pos);
		else printf("%05d %d -1\n",res[i].pos,res[i].data);
	
	}
	return 0;
}

