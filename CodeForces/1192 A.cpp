/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/25/2019 11:03:42 PM
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
#include<unordered_map>
#include<unordered_set>
#define ll long long
#define ull unsigned long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
struct node{
	int r,c,idx;
	node(){
	}
	node(int a,int b) : r(a),c(b) { }
	bool operator <(const node &a)const {
		return r<a.r||(r==a.r&&c<a.c);
	}
}x[150010];
struct ps{
	int r,c;
	ps(){}
	ps(int a,int b) : r(a),c(b) { }
	bool operator <(const ps &a)const {
		return r<a.r||(r==a.r&&c<a.c);
	}
}p[150010];
set<ps> st;
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,t;
	cin>>n>>t;
	for(auto i=1;i<=n;i++)
	{
		cin>>x[i].r>>x[i].c;
		x[i].idx=i;
		p[i].r=x[i].r;
		p[i].c=x[i].c;
	}
	sort(x+1,x+n+1);
	sort(p+1,p+n+1);
	vector<int> v;
	v.push_back(x[1].idx);
	for(int i=p[1].r-1;i<=p[1].r+1;i++)
		for(int j=p[1].c-1;j<=p[1].c+1;j++)
			if(p[1].r!=i&&p[1].c!=j)
				st.insert(ps(i,j));

	for(auto i=2;i<=n;i++)
		if(st.find(p[i])!=st.end())
		{
			st.erase(st.find(p[i]));
			for(int j=p[i].r-1;j<=p[i].r+1;j++)
				for(int k=p[i].c-1;k<=p[i].c+1;k++)
					if(p[i].r!=i&&p[i].c!=j)
						st.insert(ps(j,k));
			v.push_back(x[i].idx);
		}
	//sort(v.begin(),v.end());
	if(v.size()==n)
	{
		cout<<"YES"<<endl;
		for(auto i:v)
			cout<<i<<endl;
	}
	else cout<<"NO"<<endl;
 	return 0;
}

