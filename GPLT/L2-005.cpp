//Author: WindCry1
//Mail: lanceyu120@gmail.com
//Website: https://windcry1.com
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
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int N;
	cin>>N;
	set<int> s[N+2];
	for(int i=1;i<=N;i++)
	{
		int n;
		cin>>n;
		while(n--)
		{
			int t;
			cin>>t;
			s[i].insert(t);
		}
	}
	int k,x,y;
	cin>>k;
	while(k--)
	{
		set<int> its;
		cin>>x>>y;
		set_intersection(s[x].begin(),s[x].end(),s[y].begin(),s[y].end(),inserter(its,its.begin()));
		cout<<fixed<<setprecision(2)<<(double)100*its.size()/(s[x].size()+s[y].size()-its.size())<<"%"<<endl;
	}
	return 0;
}

