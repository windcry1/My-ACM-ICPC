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
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
int a[100010];
struct node{
	int w,v;
	bool operator <(const node a)const{
		return this->w<a.w;
	}
};
vector<node> v;
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m;
	cin>>n>>m;
	int MAX=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		MAX=max(a[i],MAX);
	}
	int c,d;
	node t;
	while(m--)
	{
		cin>>t.w>>t.v;
		v.push_back(t);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=0;j<v.size();j++)
		{
			if(v[j].w>a[i])
			{
				cout<<sum<<" ";
				break;
			}
			sum+=v[j].v;
		}
	}
 	return 0;
}

