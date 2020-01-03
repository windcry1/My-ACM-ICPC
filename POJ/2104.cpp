#include<algorithm>
#include<cstdio>
#include<map>
using namespace std;
int n,m,totn,a[100001],b[100001];
int sz,root[100001],s[2000000],ls[2000000],rs[2000000];
void Insert(int l,int r,int x,int &y,int v)
{
	y=++sz;
	s[y]=s[x]+1;
	if(l==r) return;
	ls[y]=ls[x]; rs[y]=rs[x];
	int mid=(l+r)>>1;
	if(v<=mid) Insert(l,mid,ls[x],ls[y],v);
	else Insert(mid+1,r,rs[x],rs[y],v);
}
int Ask(int l,int r,int x,int y,int k)
{
	if(l==r) return l;
	int mid=(l+r)>>1,v=s[ls[y]]-s[ls[x]];
	if(v>=k) return Ask(l,mid,ls[x],ls[y],k);
	else return Ask(mid+1,r,rs[x],rs[y],k-v);
}
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	  scanf("%d",&a[i]),b[i]=a[i];
	sort(b+1,b+n+1);
	totn=unique(b+1,b+n+1)-b-1;
	for(int i=1;i<=n;i++)
	  Insert(1,totn,root[i-1],root[i],
	  lower_bound(b+1,b+totn+1,a[i])-b);
	for(int i=1,x,y,z;i<=m;i++)
	  scanf("%d%d%d",&x,&y,&z),
	  printf("%d\n",b[Ask(1,totn,root[x-1],root[y],z)]);
}
