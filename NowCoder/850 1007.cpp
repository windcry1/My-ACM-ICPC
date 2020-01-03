#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N=10010;
int tr1[N],tr2[N];
int lowbit(int x){return x&-x;}
void add1(int x,ll y){
	while(x<N){tr1[x]+=y,x+=lowbit(x);}
}
int get1(int x){
	int res=0;
	while(x>0){res+=tr1[x],x-=lowbit(x);}
	return res;
}
void add2(int x,int y){
	while(x<N){tr2[x]+=y,x+=lowbit(x);}
}
int get2(int x){
	int res=0;
	while(x>0){res+=tr2[x],x-=lowbit(x);}
	return res;
}
void Add(int x){
	add1(x,x),add2(x,1);
}
int calc(int x){
	int l=0,r=N-1;
	while(l<r){
		int mid=(l+r+1)>>1;
		int num=get1(mid);
		if(num<=x)l=mid;
		else r=mid-1;
	}
	int res=get2(l),num=get1(l);
	return res+floor(((x-num)*1.0)/(l+1));
}
int n,T,t[200005],s[200005];
int main(){
	//freopen("txt.in","r",stdin);freopen("txt.out","w",stdout);
	int Q;
	cin>>Q;
	while(Q--)
	{
		scanf("%d%d",&n,&T);
		memset(tr1,0,sizeof(tr1));
		memset(tr2,0,sizeof(tr2));
		s[0]=0;
		for(int i=1;i<=n;i++)scanf("%d",&t[i]);
		for(int i=1;i<=n;i++) s[i]=s[i-1]+t[i];
		for(int i=1;i<=n;i++){
			if(s[i]<=T)
			{
				printf("0%c",i==n?10:32);
				Add(t[i]);
				continue;
			}
			else
			{
				printf("%d%c",i-1-calc(T-t[i]),i==n?10:32);
				Add(t[i]);
			}
		}
	}
	return 0;
}
