/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 11:03:37 PM
*************************************************************************/
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
#define ll long long
#define ull unsigned long long
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#define lowbit(x) x&(-x)
#define ls u<<1
#define rs u<<1|1
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
namespace in{
	char buf[1<<22],*p1=buf,*p2=buf;
	inline int getc(){
		return p1==p2&&(p2=(p1=buf)+fread(buf,1,1<<22,stdin),p1==p2)?EOF:*p1++;
	}
	inline int redi(){
	    int ret=0,f=0;char ch=getc();
	    while(!isdigit(ch)){
	        if(ch=='-') f=1;
	        ch=getc();
	    }
	    while(isdigit(ch)){
	        ret=ret * 10 + ch - 48;
	        ch=getc();
	    }
	    return f?-ret:ret;
	}
}
namespace out{
	char buf[1<<22],a[20];int p,p2=-1;
	inline void flush() {
   		fwrite (buf,1,p2+1,stdout),p2=-1;
	}
	inline void print(int x){
		if (p2>1<<21) flush();
    	if (x<0) buf[++p2]=45,x=-x;
    	do {
       		a[++p]=x%10+48;
    	}while(x/=10);
    	do {
        	buf[++p2]=a[p];
    	}while(--p);
	}
	inline void print(char c){
		buf[++p2]=c;
	}
}
int a[1000010];
bool vis[1000010];
int pos;
vector<int> res;
void dfs(int u){
	vis[u]=true;
	if(vis[u-a[u]]){
		for(int i=0;i<res.size();i++){
			if(res[i]==u-a[u]){
				out::print((int)res.size()-i);
				out::print('\n');
				for(int j=i;j<res.size();j++) out::print(res[j]),out::print(' ');
				out::print('\n');
				return ;
			}
		}
	}
	res.push_back(u-a[u]);
	dfs(u-a[u]);
}
int main(){
	//ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
#endif
	int T;T=in::redi();while(T--){
		int n;n=in::redi();
		for(int i=1;i<=n;i++) a[i]=in::redi(),vis[i]=false;
		res.clear();
		res.push_back(1);
		dfs(1);
	}
	out::flush();
	return 0;
}


