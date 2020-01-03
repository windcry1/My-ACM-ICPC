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
	int n;
	int a[100001];
	while(cin>>n)
	{
		ll sum=0;
		int tmp;
		priority_queue<int,vector<int>,greater<int> > q;
		for(int i=0;i<n;i++)
		{
			cin>>tmp;
			q.push(tmp);
		}
		for(int i=0;i<n-1;i++)
		{
			tmp=0;
			tmp+=q.top();
			q.pop();
			tmp+=q.top();
			q.pop();
			sum+=tmp;
			q.push(tmp);
		}
		cout<<sum<<endl;
	}
 	return 0;
}

