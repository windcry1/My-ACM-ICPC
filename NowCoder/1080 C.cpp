/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/23/2019 7:41:15 PM
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
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
struct node{
	ll v,s;
	inline bool operator <(const node &a) const{
		return s>a.s;
	}
}x[100010];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;while(cin>>n)
    {
        for(int i=0;i<n;i++) cin>>x[i].v>>x[i].s;
        sort(x,x+n);
        ll res=0;
        priority_queue<ll,vector<ll>,greater<ll> > pq;
        for(int i=0;i<n;i++)
        {
            if(1LL*pq.size()<x[i].s)
                pq.push(x[i].v),res+=x[i].v;
            else
            {
                vector<ll> v;v.clear();
                ll temp=0;
                while(1LL*pq.size()!=x[i].s-1)
                {
                    temp+=pq.top();
                    v.push_back(pq.top());
                    pq.pop();
                }
                if(temp<x[i].v)
                    pq.push(x[i].v),res+=x[i].v-temp;
                else for(auto j:v)
                    pq.push(j);
            }
        }
        cout<<res<<endl;
    }
	return 0;
}

