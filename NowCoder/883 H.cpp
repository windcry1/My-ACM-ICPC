/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/25/2019 8:46:58 PM
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
const int MMAX=1e8;
const int INF=0xfffffff;
const int mod=1e9+7;
struct node{
	int x,y;
	node(int a,int b) : x(a),y(b) {};
	bool operator <(const node &a) const {
		return x<a.x||x==a.x&&y<a.y; 
	};
};
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
        vector<node> v;
		int n;
		cin>>n;
		int p=n;
		while(p--)
		{
			int a,b;
			cin>>a>>b;
			v.emplace_back(a,b);
		}
		sort(v.begin(),v.end());
//		for(auto i:v)
//			cout<<i.x<<" "<<i.y<<endl;
		cout<<v[n/2-1].x-1<<" "<<v[n/2-1].y+MMAX<<" "<<v[n/2-1].x+1<<" "<<v[n/2-1].y-MMAX+1<<endl;
	}
 	return 0;
}

