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
 	//ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,times=0;
	while(cin>>n&&n)
	{
		cout<<"Scenario #"<<++times<<endl;
		int t,te;
		map<int, int> ma;
		queue<int> q[1010],ord;
		string s;
		for(int i=0;i<n;i++)
		{
			cin>>t;
			for(int j=0;j<t;j++)
			{
				cin>>te;
				ma[te]=i;
			}
		}
		while(cin>>s&&s!="STOP")
		{
			if(s=="ENQUEUE")
			{
				cin>>te;
				if(q[ma[te]].empty())
					ord.push(ma[te]);
				q[ma[te]].push(te);
			}
			if(s=="DEQUEUE")
			{
				cout<<q[ord.front()].front()<<endl;
				q[ord.front()].pop();
				if(q[ord.front()].empty())
					ord.pop();
			}
		}
		cout<<endl;
	}
 	return 0;
}

