/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/7/2019 11:01:32 PM
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
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int MMAX = 0x7fffffff;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ostream& operator <<(ostream &out, pii &p){
    return out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
    return in>>p.first>>p.second;
}
int fa[1010];
int find(int x){
    if(x!=fa[x]) return find(fa[x]);
    else return x;
}
void join(int a,int b){
    if(find(a)!=find(b)) fa[find(a)] = find(b);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
    //freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
    int n,m;cin>>n>>m;
    for(int i=1;i<=n;i++) fa[i]=i;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        join(x,y);
	}
	bool flag=false;
    for(int i=1;i<=n;i++) if(find(i)!=find(1)) cout<<i<<endl,flag=true;
    if(!flag) cout<<0<<endl;
    return 0;
}
