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
#ifdef FAST_IO
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
using namespace IN;
using namespace OUT;
#endif
bool vis[(1<<19)];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	int n,x;cin>>n>>x;
	int last=0;
	for(int i=0;i<(1<<n);i++) if(!vis[i]) vis[i^x]=1;//x can be formed
	vector<int> res;
	for(int i=1;i<(1<<n);i++) if(!vis[i]) res.push_back(last^i),last=i;
	cout<<res.size()<<endl;
	for(auto i:res) cout<<i<<" ";
	return 0;
}


