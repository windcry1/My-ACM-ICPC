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
pdd a[1010],d;
double r;
double dis(pdd a,pdd b){
    return sqrt((a.first-b.first)*(a.first-b.first)+(a.second-b.second)*(a.second-b.second));
}
double cross(pdd a,pdd b,pdd c){
    return (b.first-a.first)*(c.second-a.second)-(c.first-a.first)*(b.second-a.second);
}
void MiniDiscWith2Point(pdd p,pdd q,int n){
    d.first=(p.first+q.first)/2;
    d.second=(p.second+q.second)/2;
    r=dis(p,q)/2;
    double c1,c2,t1,t2,t3;
    for(int k=1;k<=n;k++){
        if(dis(d,a[k])<=r) continue;
        if(cross(p,q,a[k])!=0.0)
        {
            c1=(p.first*p.first+p.second*p.second-q.first*q.first-q.second*q.second)/2;
            c2=(p.first*p.first+p.second*p.second-a[k].first*a[k].first-a[k].second*a[k].second)/2;
            d.first=(c1*(p.second-a[k].second)-c2*(p.second-q.second))/((p.first-q.first)*(p.second-a[k].second)-(p.first-a[k].first)*(p.second-q.second));
            d.second=(c1*(p.first-a[k].first)-c2*(p.first-q.first))/((p.second-q.second)*(p.first-a[k].first)-(p.second-a[k].second)*(p.first-q.first));
            r=dis(d,a[k]);
        }
        else{
            t1=dis(p,q);
            t2=dis(q,a[k]);
            t3=dis(p,a[k]);
            if(t1>=t2&&t1>=t3){
                d.first=(p.first+q.first)/2.0;
                d.second=(p.second+q.second)/2.0;
                r=dis(p,q)/2.0;
            }
            else if(t2>=t1&&t2>=t3){
                d.first=(a[k].first+q.first)/2.0;
                d.second=(a[k].second+q.second)/2.0;
                r=dis(a[k],q)/2.0;
            }
            else{
                d.first=(a[k].first+p.first)/2.0;
                d.second=(a[k].second+p.second)/2.0;
                r=dis(a[k],p)/2.0;
            }
        }
    }
}
void MiniDiscWithPoint(pdd pi,int n){
    d.first=(pi.first+a[1].first)/2.0;
    d.second=(pi.second+a[1].second)/2.0;
    r=dis(pi,a[1])/2.0;
    int j;
    for(j=2;j<=n;j++){
        if(dis(d,a[j])<=r) continue;
        else
        {
            MiniDiscWith2Point(pi,a[j],j-1);
        }
    }
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	int n;while(cin>>n and n){
		for(int i=1;i<=n;i++) cin>>a[i].first>>a[i].second;
		r=dis(a[1],a[2])/2.0;
	    d.first=(a[1].first+a[2].first)/2;
	    d.second=(a[1].second+a[2].second)/2;
	    for(int i=3;i<=n;i++){
	        if(dis(d,a[i])<=r)continue;
	        else MiniDiscWithPoint(a[i],i-1);
	    }
	    cout<<fixed<<setprecision(2)<<d.first<<" "<<d.second<<" "<<r<<endl;
	}
	return 0;
}


