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
struct node{
	int num,time,id;
}x[10001];
bool cmp(const node a,const node b)
{
	if(a.num>b.num)
		return true;
	else if(a.num==b.num&&a.time<b.time)
		return true;
	return false;
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	while(cin>>n&&n)
	{
		for(int i=0;i<10000;i++)
			x[i].id=i;
		if(n==0)
			break;
		for(int i=0;i<n;i++)
			cin>>x[i].num>>x[i].time;
		sort(x,x+n,cmp);
		cout<<x[0].id+1<<endl;
	}
 	return 0;
}

