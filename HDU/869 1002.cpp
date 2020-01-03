/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/23/2019 2:29:57 PM
*************************************************************************/
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<iostream>
#include<string>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
#include<complex>
#include<stack>
#include<bitset>
#include<iomanip>
#include<list>
#if __cplusplus >= 201103L
#include<unordered_map>
#include<unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
const int N=1e5+10;
//struct node{
//	int l,r,sum;
//}t[N<<5]; 
//int cnt,root[N];
//void change(int l,int r,int &x,int y,int k){
//	cnt++;	t[x]=t[y];	t[x].sum++;
//	if(l==r)	return ;
//	int mid=l+r>>1;
//	if(k<=mid)	change(l,mid,t[x].l,t[y].l,k);
//	else	change(mid+1,r,t[x].r,t[y].r,k);
//}
//int ask(int l,int r,int x,int y,int k){
//	if(l==r)	return l;
//	int mid=l+r>>1;
//	int sum=t[y].sum-t[x].sum;
//	if(sum>=k)	return ask(l,mid,t[x].l,t[y].l,k);
//	else	return ask(mid+1,r,t[x].r,t[y].r,k-sum);
//}
vector<int> v;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
	while(T--)
	{
		int n,m,t;cin>>n>>m;
		stringstream ss;
		for(int i=0;i<n;i++)
			cin>>t,ss<<t<<" ";
		while(ss)
			ss>>t,cout<<t<<"\n";
	}
	return 0;
}

