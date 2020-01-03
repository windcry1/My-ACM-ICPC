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
#define endl '\n'
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
namespace IN {
    const int MAX_INPUT = 1000000;
    #define getc() (p1 == p2 && (p2 = (p1 = buf) + inbuf -> sgetn(buf, MAX_INPUT), p1 == p2) ? EOF : *p1++)
    char buf[MAX_INPUT], *p1, *p2;
    template <typename T> inline bool redi(T &x) {
        static std::streambuf *inbuf = cin.rdbuf();
        x = 0;
        register int f = 0, flag = false;
        register char ch = getc();
        while (!std::isdigit(ch)) {
            if (ch == '-') f = 1;
        ch = getc();
        }
        if (std::isdigit(ch)) x = x * 10 + ch - '0', ch = getc(),flag = true;
        while (std::isdigit(ch)) {
            x = x * 10 + ch - 48;
            ch = getc();
        }
        x = f ? -x : x ;
        return flag;
    }
    template <typename T,typename ...Args> inline bool redi(T& a,Args& ...args) {
       return redi(a) && redi(args...);
    }
    #undef getc
}
namespace OUT {
    template <typename T> inline void put(T x) {
        static std::streambuf *outbuf = cout.rdbuf();
        static char stack[21];
        static int top = 0;
        if (x < 0) {
            outbuf -> sputc('-');
            x=-x;
        }
        if (!x) {
            outbuf -> sputc('0');
            return;
        }
        while (x) {
            stack[++top] = x % 10 + '0';
            x /= 10;
        }
        while (top) {
            outbuf -> sputc(stack[top]);
            -- top;
        }
    }
    inline void putc (const char ch) {
        static std::streambuf *outbuf = cout.rdbuf();
        outbuf -> sputc(ch);
    }
    template <typename T> inline void put(const char ch,T x)
    {
        static std::streambuf *outbuf = cout.rdbuf();
        static char stack[21];
        static int top = 0;
        if (x < 0) {
            outbuf -> sputc('-');
            x=-x;
        }
        if (!x) {
            outbuf -> sputc('0');
            outbuf -> sputc(ch);
            return;
        }
        while (x) {
            stack[++top] = x % 10 + '0';
            x /= 10;
        }
        while (top) {
            outbuf -> sputc(stack[top]);
            --top;
        }
        outbuf -> sputc(ch);
    }
    template<typename T,typename ...Args> inline void put(T a,Args ...args) {
        put(a);put(args...);
    }
    template<typename T,typename ...Args> inline void put(const char ch,T a,Args ...args) {
        put(ch,a);put(ch,args...);
    }
}
//using namespace IN;
//using namespace OUT;
//#ifdef WindCry1
//#undef WindCry1
//#endif 
struct Edge{
	int to,val,next;
}edge[200010];
int head[100010],tot,cnt,n,m;
vector<int> v[100010];
inline void add_edge(int u,int v,int w){
	edge[++tot].to=v; edge[tot].val=w; edge[tot].next=head[u]; head[u]=tot;
}
void dfs(int u){
	if(u==n) return ;
	for(int i=head[u];i;i=edge[i].next){
		v[cnt].push_back(edge[i].val);
		dfs(edge[i].to);
	}
}
map<int,int> cost;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	cin>>n>>m;
	ll flow=0,s=0;
	for(int i=1;i<=m;i++){
		int u,v,w;cin>>u>>v>>w;
		add_edge(u,v,w);
		flow+=w;
	}
	for(int i=head[1];i;i=edge[i].next){
		v[cnt].push_back(edge[i].val);
		dfs(edge[i].to);
		sort(v[cnt].begin(),v[cnt].end());
		s=max(s,(ll)v[cnt].size());
		++cnt;
	}
	flow/=s;
#ifdef WindCry1
	for(int i=0;i<cnt;i++)
		for(auto j:v[i]) cout<<j<<" ";cout<<endl;
	DEBUG(flow);
#endif
	for(int i=0;i<cnt;i++){
		if(v[i].size()==s){
			flow-=v[i][0];
			for(int j=1;j<v[i].size();j++)
				cost[j]+=v[i][j]-v[i][0];
		}
	}
	ll res=0;
#ifdef WindCry1
	for(auto i:cost) cout<<i.first<<" : "<<i.second<<endl;
	DEBUG(flow);
#endif
	for(auto i:cost){
		if(flow<=i.second) {
			res+=flow*i.first;
			break;
		}
		res+=i.first*i.second;
	}
	cout<<res<<endl;
	return 0;
}


