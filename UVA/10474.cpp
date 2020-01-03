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

int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m,t;
	int times=0;
	while(cin>>n>>m&&n&&m)
	{
		cout<<"CASE# "<<++times<<":"<<endl;
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			cin>>t;
			v.push_back(t);
		}
		sort(v.begin(),v.end());
		for(int i=0;i<m;i++)
		{
			int j;
			cin>>t;
			for(j=0;j<v.size();j++)
				if(v[j]==t)
				{
					cout<<t<<" found at "<<j+1<<endl;
					break;
				}
			if(j==v.size())
				cout<<t<<" not found"<<endl;
			}
		}
 	return 0;
}

