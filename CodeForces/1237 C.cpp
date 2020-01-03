/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 10/16/2019 10:58:04 PM
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
const int INF = 0xfffffff;
const int mod = 1e9+7;
const int maxn=1e5+7;
bool vis[maxn];
struct node{
    int x,y,z,id;
}t[maxn];
inline bool cmp(node x,node y){
	return x.x<y.x||(x.x==y.x&&x.y<y.y)||(x.x==y.x&&x.y==y.y&&x.z<y.z);
}
vector<int> v;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
    int n;cin>>n;
    for(int i=1;i<=n;i++) cin>>t[i].x>>t[i].y>>t[i].z,t[i].id=i;
    sort(t+1,t+n+1,cmp);
    for(int i=2;i<=n;i++){
        if(t[i].x==t[i-1].x&&t[i].y==t[i-1].y&&!vis[i-1]){
        	cout<<t[i].id<<" "<<t[i-1].id<<endl;
            vis[i]=true;
            vis[i-1]=true;
        }
    }
    for(int i=1;i<=n;i++)
        if(!vis[i]) 
            v.push_back(i);
    for(int i=1;i<v.size();i++){
        int now=v[i],pre=v[i-1];
        if(t[now].x==t[pre].x&&!vis[pre]){
        	cout<<t[now].id<<" "<<t[pre].id<<endl;
            vis[now]=true;
            vis[pre]=true;
        }
    }
    v.clear();
    for(int i=1;i<=n;i++)
        if(!vis[i])
            v.push_back(i);
    for(int i=0;i<v.size()/2;i++){
        int now=v[i*2],pre=v[i*2+1];
        cout<<t[now].id<<" "<<t[pre].id<<endl;
    }
    return 0;
}

