#include<bits/stdc++.h>
#define ll long long
using namespace std;
int tree[100],a[100],n;
int now=0;
void bulid(int x){
	if(x>n) return ;
	bulid(x<<1);
	bulid(x<<1|1);
	tree[x]=a[now++];
}
int main(){
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	#ifdef WindCry1
		freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
	#endif
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	bulid(1);
	for(int i=1;i<=n;i++) cout<<tree[i]<<" \n"[i==n];
	return 0;
}
