/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 10/13/2019 6:51:04 PM
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
int res,n,m,k;
void bfs()
{
    queue<pair<int,int> > q;
    q.push(make_pair(k,n));
    while(q.size())
    {
        pair<int,int> u=q.front();
        //cout<<"u.f = "<<u.first<<",u.s = "<<u.second<<endl;
        q.pop();
        if(u.first==m&&u.second==0)    res++;
        if(u.second==0) continue;
        if(abs(m-u.first)>u.second) continue;
        if(u.first+1<=100)  q.push({u.first+1,u.second-1});
        if(u.first-1>=1)    q.push({u.first-1,u.second-1});
    }
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	while(cin>>m>>n>>k) res=0,bfs(),cout<<res<<endl;
	return 0;
}

