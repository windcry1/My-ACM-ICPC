/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 11:03:37 PM
*************************************************************************/
//#pragma GCC optimize(3)
//#pragma GCC diagnostic error "-std=c++11"
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <complex>
#include <stack>
#include <bitset>
#include <iomanip>
#include <list>
#include <sstream>
#include <fstream>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#define lowbit(x) x&(-x)
#define ls u<<1
#define rs u<<1|1
using namespace std;
template<typename T> inline T MIN(const T &a,const T &b) {return a<b?a:b;}
template<typename T> inline T MAX(const T &a,const T &b) {return a>b?a:b;}
template<typename T,typename ...Args> inline T MIN(const T &a,const T &b,Args ...args) {return MIN(MIN(a,b),args...);}
template<typename T,typename ...Args> inline T MAX(const T &a,const T &b,Args ...args) {return MAX(MAX(a,b),args...);}
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};

const int MAXN = 100+10;
int n,p[MAXN],s1,s2,res;
struct node{int p1,p2,l,r,len;};
vector<node> v1,v2;
int cmp(node a,node b){return a.len<b.len;}
int main(){
ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	cin>>n;
	for(int i=1;i<=n;i++)	cin>>p[i];
	s1=(n+1)/2,s2=n/2;
	for(int i=1;i<=n;i++){
		if(p[i]==0)	continue;
		if(p[i]&1)	s1--;	else	s2--;
	}
	if(n==1)	return puts("0"),0;
	if(s1+s2==n)	return puts("1"),0;
	for(int i=1;i<n;i++){
		if(p[i]==0||p[i+1]==0)	continue;
		if((p[i]+p[i+1])&1)	res++;
	}
	for(int i=1;i<=n;i++){
		if(p[i]==0){
			int j=i;
			while(j<n&&p[j+1]==0)	j++;
			if(i==1||(p[i-1]+p[j+1])%2==0||j==n){
				if(i==1||j==n)	v1.push_back({p[i-1],p[j+1],i,j,j-i+1});
				else	v2.push_back({p[i-1],p[j+1],i,j,j-i+1});
			}
			else	res++;
			i=j+1;
		}
	}
	sort(v1.begin(),v1.end(),cmp);
	sort(v2.begin(),v2.end(),cmp);	int flag=0;
	for(int i=0;i<v2.size();i++){
		if(v2[i].p1&1){
			if(s1>=v2[i].len){
				s1-=v2[i].len;	continue;
			}else{
				flag++;
			}
		}else{
			if(s2>=v2[i].len){
				s2-=v2[i].len;	continue;
			}else{
				flag++;
			}
		}
	}
	for(int i=0;i<v1.size();i++){
		if(v1[i].l==1){
			if(v1[i].p2&1){
				if(s1>=v1[i].len){
					s1-=v1[i].len;	continue;
				}else{
					int t=v1[i].len; t-=s1; s1=0; s2-=t; res++;
				}
			}else{
				if(s2>=v1[i].len){
					s2-=v1[i].len;	continue;
				}else{
					int t=v1[i].len; t-=s2; s2=0; s1-=t; res++;
				}
			}
		}else if(v1[i].r==n){
			if(v1[i].p1&1){
				if(s1>=v1[i].len){
					s1-=v1[i].len;	continue;
				}else{
					int t=v1[i].len; t-=s1; s1=0; s2-=t; res++;
				}
			}else{
				if(s2>=v1[i].len){
					s2-=v1[i].len;	continue;
				}else{
					int t=v1[i].len; t-=s2; s2=0; s1-=t; res++;
				}
			}
		}
	}
	cout<<res+flag*2<<endl;
	return 0;
}

