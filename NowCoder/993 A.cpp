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
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
//list<int> l;
list<int> v;
list<int> a[110];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,k,p;
	cin>>n>>k>>p;
	for(int i=1;i<=k;i++)
		v.push_back(i);
	int cnt=1;
	while(!v.empty())
	{
		int t=v.front();
		v.pop_front();
		a[cnt].push_back(t);
		cnt=(cnt)%n+1;
		if(!v.empty())
		{
			for(int i=0;i<p;i++)
			{
				t=v.front();
				v.pop_front();
				v.push_back(t);
			}
		}
	}
	a[n].sort();
	for(list<int>::iterator it=a[n].begin();it!=a[n].end();it++)
		cout<<*it<<endl;
 	return 0;
}

