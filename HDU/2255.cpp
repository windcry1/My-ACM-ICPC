/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 11:03:37 PM
*************************************************************************/
//#pragma GCC optimize(3)//ACWing, CCF
//#define FAST_IO
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
const int N = 1e4+10;
const int M = 1e6+10;
const bool DEBUG = 0; 
struct Ele
{
    int tp, id;
    int l, r;
    Ele(){};
    Ele(int tp_, int id_, int l_, int r_) {
        tp = tp_; id = id_; l = l_; r = r_;
    };
};
int n,m;
int b[N],a[N];
bool cmpL(Ele a, Ele b) {
    if(a.l != b.l)return a.l > b.l;
    return a.tp > b.tp;
}
// ????????
bool cmpR(Ele a, Ele b) {
    if(a.r != b.r)return a.r < b.r;
    return a.tp > b.tp;
}
struct wkcMCMF {
    int ST, ED;                             // ?????(??????ST=0,ED=????????)
    int first[N], ID;                       // ????????(ID????1,??????????)
    int w[M], cap[M], cost[M], nxt[M];	    // ????(???w,??cap,??????cost,?????nxt)???
    ll f[N];							    // f[x]????????,?????x?????
    int pe[N];							    // pe[x]????x????
    bool e[N];							    // e[x]????x???SPFA????????
    queue<int> q;                           // q?SPFA???
    int SUM;                                // ?????????——??????
 
    // ??
    void ins(int x, int y, int cap_, ll cost_) {
        w[++ID] = y;
        cap[ID] = cap_;
        cost[ID] = cost_;
        nxt[ID] = first[x];
        first[x] = ID;
        w[++ID] = x;
        cap[ID] = 0;
        cost[ID] = -cost_;
        nxt[ID] = first[y];
        first[y] = ID;
    }
 
    // ??
    void inq(int x, ll cost_, int pe_) {
        if (cost_ <= f[x])return;           // ????????,??????
        f[x] = cost_;                       // ??????????????
        pe[x] = pe_;                        // ????????
        if (x == ED || e[x])return;         // SPFA?????????????????
        e[x] = true;
        q.push(x);
    }
 
    // SPFA????(????)
    int Augmenting = 1;                     // ????????????????,??????? 1 ?? 0 ???
    bool spfa() {                           // ????true?????????????
        memset(f,-63,sizeof (ED+2)*f[0]);         // ?????????????? [-1??????]
        cap[0] = 1e9;
        inq(ST, 0, 0);
        while (!q.empty()) {
            int x = q.front();
            q.pop();
            e[x] =  0;
            for (int z = first[x]; z; z = nxt[z]) {
                if (cap[z])inq(w[z], f[x] + cost[z], z);
            }
        }
        return f[ED] >= Augmenting;         // ?? < Augmenting ????????????
    }
 
    // ???????,???????????,??????? [?????????]
    vector<ll>slowMCMF(ll basic) {
        vector<ll>rtn;
        int maxflow = 0;
        ll mincost = basic;
        while (spfa()) {
            int flow = 1e9;
            int x = ED;
            while (x != ST) {
                flow = min(flow, cap[pe[x]]);
                x = w[pe[x] ^ 1];
            }
            maxflow += flow;
            x = ED;
            while (x != ST) {
                cap[pe[x]] -= flow;
                cap[pe[x] ^ 1] += flow;
                x = w[pe[x] ^ 1];
            }
            for(int i = 1; i <= flow; ++i) {
                mincost += f[ED];
                rtn.push_back(mincost);
            }
        }
        while(rtn.size() < m) {
            rtn.push_back(mincost);
        }
        return rtn;
    }
 
    // ?????????DFS??????
    bool vis[N];
    int dfs(int x, int all) {
        if (x == ST)return all;
        int use = 0;
        vis[x] = true;
        for (int z = first[x]; z; z = nxt[z])
            if (cap[z ^ 1]) {
                int y = w[z];
                if (!vis[y] && f[y] + cost[z ^ 1] == f[x]) {
                    int tmp = dfs(y, min(cap[z ^ 1], all - use));
                    cap[z ^ 1] -= tmp;
                    cap[z] += tmp;
                    use += tmp;
                    if (use == all)break;
                }
            }
        return use;
    }

    vector<ll> fastMCMF(ll basic) {
        vector<ll>rtn;
        int maxflow = 0;
        ll mincost = basic;
        while (spfa()) {
            int flow;
            while (memset(vis, 0, sizeof ((ED+2)*vis[0])),
                    flow = dfs(ED, 1e9)) {
                maxflow += flow;
                for(int i = 1; i <= flow; ++i) {
                    mincost += f[ED];
                    rtn.push_back(mincost);
                }
            }
        }
        while(rtn.size() < m) {
            rtn.push_back(mincost);
        }
        return rtn;
    }
 
    // ST = 0
    // added point [1, m]
    // up segment point [m + 1, m + n)
    // down segment point [m + n + 1, m + n + n)
    // final [m + n + n + 0, m + n + n + n]
    // ED = m + n * 3 + 1
    Ele ele[N];
    map<int, int>rkL;                   // ?????????????(start from 1)
    map<int, int>rkR;                   // ?????????????(start from 1)
    pair<int, int>vaL[N];               // sorted L list (vaL, id) down
    pair<int, int>vaR[N];               // sorted R list (vaR, id) up
    int pos[N];                         // a to b, record the ans
    vector<int>ansVec;                  // ans vector
    void NplusM_mapBuild() {
        ID = 1;
        ST = 0;
        ED = m + n * 3 + 1;
        int eg = 0;
        for (int i = 1; i <= m; ++i) {
            ele[++eg].tp = 1;
            ele[eg].id = i;
            ele[eg].l = ele[eg].r = b[i];
        }
        for (int i = 1; i < n; ++i) {
            ele[++eg].tp = 2;
            ele[eg].id = i;
            ele[eg].l = min(a[i], a[i + 1]);
            ele[eg].r = max(a[i], a[i + 1]);
        }
        rkL.clear();
        rkR.clear();
        // point -> bigger segment [L decreasing order]
        // ??? [l[i + 1], r[i + 1]] ??? [l[i], r[i]] ???????(>=m??),???(l[i] - l[i + 1]) * 2?? <??n - 2??>
        int lastId = 1e9;
        int lastV;
        int oL = 0;
        sort(ele + 1, ele + eg + 1, cmpL);
        for(int i = 1; i <= eg; ++i) {
            if(ele[i].tp == 2) {
                int eid = ele[i].id + m;
                if(lastId != 1e9) {
                    ins(eid, lastId, 1e9, (lastV - ele[i].l) << 1);
                }
                lastId = eid;
                lastV = ele[i].l;
                vaL[++oL] = {lastV, ele[i].id};
                rkL[lastV] = oL;
            }
            else if(lastId != 1e9) {
                // ????????(????) "????????[l, r]", ??????1(>=1??),???(l - v) * 2??
                ins(ele[i].id, lastId, 1, (lastV - ele[i].l) << 1);
            }
        }
//        if (DEBUG) {
//            printf("rkL(v,g): ");
//            for(auto &it : rkL)printf("[%d %d] ", it.first, it.second);
//            puts("");
//        }
        // point -> smaller segment [R increasing order]
        // ??? [l[i + 1], r[i + 1]] ??? [l[i], r[i]] ???????(>=m??),???(r[i + 1] - r[i]) * 2?? <??n - 2??>
        lastId = 1e9;
        int oR = 0;
        sort(ele + 1, ele + eg + 1, cmpR);
        for (int i = 1; i <= eg; ++i) {
            if (ele[i].tp == 2) {
                int eid = ele[i].id + m + n;
                if(lastId != 1e9) {
                    ins(eid, lastId, 1e9, (ele[i].r - lastV) << 1);
                }
                lastId = eid;
                lastV = ele[i].r;
                vaR[++oR] = {lastV, ele[i].id};
                rkR[lastV] = oR;
            }
            else if (lastId != 1e9) {
                // ????????(????) "????????[l, r]", ??????1(>=1??),???(v - r) * 2??
                ins(ele[i].id, lastId, 1, (ele[i].r - lastV) << 1);
            }
        }
        if (DEBUG) {
            printf("rkR(v,g): ");
            for(auto &it : rkR)printf("[%d %d] ", it.first, it.second);
            puts("");
        }
        // ? m ??????? 2 ?????????????1(>=1??),???0?? <??m * 2??>
        for (int i = 1; i <= m; ++i) {
            ins(i, m + n + n + 0, 1, abs(b[i] - a[1]));
            ins(i, m + n + n + n, 1, abs(b[i] - a[n]));
        }
        // ???? m ?????[1, m], ?????1,?????0 <??m??>
        for (int i = 1; i <= m; ++i) {
            ins(ST, i, 1, 0);
        }
        // ??????? & ??????? -> ????? <??(n-1)*2??>
        for (int i = 1; i < n; ++i) {
            ins(m + i, m + n + n + i, 1, 0);
            ins(m + n + i, m + n + n + i, 1, 0);
        }
        // ????? [m + n + n + 0, m + n + n + n] ??? ED ??????1,???0?? <??n + 1??>
        for (int i = 0; i <= n; ++i) {
            ins(m + n + n + i, ED, 1, 0);
        }
    }
 
    // ?????????????
    int from[N];                    // ?????????a?????????????????
    void NplusM_output() {
        set<int>AnyPosOK_bset;
        for (int i = 1; i <= m; ++i) {
            AnyPosOK_bset.insert(b[i]);
        }
        vector<Ele>LbTOa;
        vector<Ele>RbTOa;
        for (int y = 0; y <= n; ++y) {
            // check[m + 1, m + n) && [m + n + 1, m + n + n)
            if (y != 0 && y != n) {
                int va = min(a[y], a[y + 1]);
                for (int z = first[m + y]; z; z = nxt[z]) {
                    if (z % 2 == 1 && cap[z] != 0 && w[z] <= m) {
                        int vb = b[w[z]];
                        int va = min(a[y], a[y + 1]);
                        AnyPosOK_bset.erase(vb);
                        LbTOa.push_back({vb, rkL[va], va, va});
                        if (DEBUG) {
                            printf("LbTOa: (b = %d a = %d) va = %d vb = %d\n", w[z], y, va, vb);
                        }
                    }
                }
                va = max(a[y], a[y + 1]);
                for (int z = first[m + n + y]; z; z = nxt[z]) {
                    if (z % 2 == 1 && cap[z] != 0 && w[z] <= m) {
                        int vb = b[w[z]];
                        AnyPosOK_bset.erase(vb);
                        RbTOa.push_back({vb, rkR[va], va, va});
                        if (DEBUG) {
                            printf("RbTOa: (b = %d a = %d) va = %d vb = %d\n", w[z], y, va, vb);
                        }
                    }
                }
                // ??????????????????????
                from[y] = 0;
                for (int z = first[m + n + n + y]; z; z = nxt[z]) {
                    if (z % 2 == 1 && cap[z] != 0) {
                        if (w[z] > m && w[z] <= m + n) {
                            from[y] = 1;
                        } else if (w[z] > m + n && w[z] <= m + n + n) {
                            from[y] = 2;
                        }
                    }
                }
            }
            // ?????? y == 0 ? y == n ???????[1, m]???? [TODO——????]
            for (int z = first[m + n + n + y]; z; z = nxt[z]) {
                if (z % 2 == 1 && cap[z] != 0 && w[z] <= m) {
                    int vb = b[w[z]];
                    AnyPosOK_bset.erase(vb);
                    break;
                }
            }
        }
        // In LbTOa or RbTOa, {tp:vb, id:rk, l:va, r:va}, the same value makes rk seem to be bigger
        // In vaL or vaR, {vL or vR, id}]
        // vaL[i], the i-th smallest val and pos
        // vaR[i], the i-th biggest val and pos
        memset(pos,0,sizeof ((n+2)*pos[0]));
        int LpreID = 0;
        sort(LbTOa.begin(), LbTOa.end(), cmpL); // vaL is going down after sorting
        for(auto &it : LbTOa) {
            LpreID = min(it.id, LpreID + 1);
            while(true) {
                int p = vaL[LpreID].second;
                if (from[p] != 1)++LpreID;
                else {
                    pos[p] = it.tp;
                    break;
                }
            }
        }
        int RpreID = 0;
        sort(RbTOa.begin(), RbTOa.end(), cmpR); // vaR is going up after sorting
        for(auto &it : RbTOa) {
            it.id = min(it.id, RpreID + 1);
            RpreID = it.id;
            while(true) {
                int p = vaR[RpreID].second;
                if (from[p] != 2)++RpreID;
                else {
                    pos[p] = it.tp;
                    break;
                }
            }
        }
        if (DEBUG) {
            printf("POS: ");
            for(int i = 1; i < n; ++i)printf("%d ", pos[i]);
            puts("");
        }
        // ans output
        ansVec.clear();
        for (int y = 0; y <= n; ++y) {
            if (y) {
                ansVec.push_back(a[y]);
            }
            // possibility 1: matched already
            if (y != 0 && y != n && pos[y]) {
                ansVec.push_back(pos[y]);
                continue;
            }
            // possibility 2: head or tail
            bool flag = 0;
            if (y == 0 || y == n) {
                for (int z = first[m + n + n + y]; z; z = nxt[z]){
                    if (z % 2 == 1 && cap[z] != 0 && w[z] <= m) {
                        ansVec.push_back(b[w[z]]);
                        flag = 1;
                        break;
                    }
                }
            }
            // possibility 3: any position is the same to some elements
            if(!flag && AnyPosOK_bset.size()) {
                ansVec.push_back(*AnyPosOK_bset.begin());
                AnyPosOK_bset.erase(AnyPosOK_bset.begin());
            }
        }
        SUM = 0;
        for(int i = 0; i < ansVec.size(); ++i) {
            printf("%d ", ansVec[i]);
            if (i)SUM += abs(ansVec[i] - ansVec[i - 1]);
        }puts("");
    }
    void NmultM_mapBuild() {
        ID = 1;
        ST = 0;
        ED = m + 1 + n + 1;
        for (int i = 1; i <= m; ++i) {
            int V = b[i];
            ins(ST, i, 1, 0);
            for (int j = 0; j <= n; ++j) {
                int lftV = j == 0 ? V : a[j];
                int rgtV = j == n ? V : a[j + 1];
                int oriV = (j == 0 || j == n) ? 0 : abs(a[j + 1] - a[j]);
                int incV = abs(lftV - V) + abs(rgtV - V) - oriV;
                ins(i, m + 1 + j, 1, incV);
            }
        }
        for (int i = 0; i <= n; ++i) {
            ins(m + 1 + i, ED, 1, 0);
        }
    }
    void NmultM_output() {
        // ST = 0
        // b[] ? [1, m]
        // a[] ? [m + 1 + 0, m + 1 + n]
        // ED = n + m + 2
        vector<int>ansVec;
        for (int i = 0; i <= n; ++i) {
            pos[i] = 0;
        }
        for (int x = 1; x <= m; ++x) {
            for (int z = first[x]; z; z = nxt[z]) {
                if (z % 2 == 0 && cap[z] == 0) {
                    pos[w[z] - m - 1] = b[x];
                }
            }
        }
        for (int i = 0; i <= n; ++i) {
            if(i) ansVec.push_back(a[i]);
            if(pos[i])ansVec.push_back(pos[i]);
        }
        for(auto &it : ansVec) {
            printf("%d ", it);
        }puts("");
    }
    void printMap() {
        for (int x = 0; x <= ED; ++x) {
            for (int z = first[x]; z; z = nxt[z]) {
                if (z % 2 == 0) {
                    int y = w[z];
                    if (cap[z ^ 1] != 0)
                        printf("%d->%d(%d, %d)\n", x, y, cap[z ^ 1], cost[z]);
                }
            }
        }
    }
}mcmf;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	int n;cin>>n;mcmf.ED=2*n+1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int t;cin>>t;
			mcmf.ins(i,j+n,1,-t);
		}
	}
	return 0;
}


