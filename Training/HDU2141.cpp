//Author:LanceYu
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
int a[1010],b[1010],c[1010];
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int x,y,z,cnt=0;
	while(cin>>x>>y>>z)
	{
		cout<<"Case "<<++cnt<<":"<<endl;
		set<int> st;
		for(int i=0;i<x;i++)
			cin>>a[i];
		for(int i=0;i<y;i++)
			cin>>b[i];
		for(int i=0;i<z;i++)
			cin>>c[i];
		for(int i=0;i<x;i++)
			for(int j=0;j<y;j++)
				for(int k=0;k<z;k++)
					st.insert(a[i]+b[j]+c[k]);
		int s,t,cnt=0;
		cin>>s;
		while(s--)
		{
			cin>>t;
			if(st.find(t)!=st.end())
				cout<<"YES"<<endl; 
			else cout<<"NO"<<endl;
		}
	}
 	return 0;
}

