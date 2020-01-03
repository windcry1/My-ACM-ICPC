/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/22/2019 1:06:05 PM
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
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
const int MAXN=500010;
int pref[MAXN];
struct Trie{
    int cnt;
    Trie *son[2];
}*tree[MAXN],node[MAXN*30];
int tot;
inline Trie* New_Node(int _,Trie*__,Trie*___)
{
    node[tot].cnt=_;
    node[tot].son[0]=__;
    node[tot].son[1]=___;
    return &node[tot++];
}
Trie* Build_Tree(Trie *p,int x,int pos)
{
    if(!pos)
        return New_Node(p->cnt+1,tree[0],tree[0]);
    if((x&pos)==0)
        return New_Node(p->cnt+1,Build_Tree(p->son[0],x,pos>>1),p->son[1]);
    else
        return New_Node(p->cnt+1,p->son[0],Build_Tree(p->son[1],x,pos>>1));
}
int Get_Ans(Trie *l,Trie *r,int pos)
{
    if(!pos) return 0;
    if(r->son[1]->cnt-l->son[1]->cnt)
        return pos + Get_Ans(l->son[1],r->son[1],pos>>1);
    else
        return Get_Ans(l->son[0],r->son[0],pos>>1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
    //freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
    int T;
    cin>>T;
    while(T--)
    {
        int n,m,t;
        tot=0;
        cin>>n>>m;
        int lastans=0;
        tree[0]=New_Node(0,NULL,NULL);
        tree[0]->son[0]=tree[0]->son[1]=tree[0];
        tree[1]=Build_Tree(tree[0],0,1<<29);// empty tree; 
        for(int i=1;i<=n;i++)
        {
            cin>>t;
            pref[i]=pref[i-1]^t;
            tree[i+1]=Build_Tree(tree[i],pref[i],1<<29);
        }
        while(m--)
        {
            cin>>t;
            if(t==1)
            {
                cin>>t;
                t^=lastans;++n;
                pref[n]=pref[n-1]^t;
                tree[n+1]=Build_Tree(tree[n],pref[n],1<<29);
            }
            else
            {
                int x,y;
                cin>>x>>y;
                x^=lastans;y^=lastans;
                x%=n+1;y%=n+1;
                if(x>y) swap(x,y);
                lastans=Get_Ans(tree[x],tree[y+1],1<<29);
                cout<<lastans<<endl;
            }
        }
    }
     return 0;
}
