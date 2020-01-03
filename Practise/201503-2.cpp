//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<iosfwd>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<array>
#include<stack>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
//const double e=2.718281828;
const double PI=3.141592653589793;
const int MMAX=2147483647;
const int mod=1e9+7;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
struct node{
	int a,b;
}x[10001];
bool cmp(node a,node b)
{
	if(a.b>b.b) return true;
	else if(a.b==b.b) return a.a<b.a;
	return false;
}
int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,t;
	for(int i=0;i<10001;i++)
	{
		x[i].a=i;
		x[i].b=0;
	}
	cin>>n;
	while(n--)
	{
		cin>>t;
		x[t].b++;
	}
	sort(x,x+10001,cmp);
	for(int i=0;i<10001;i++)
	{
		if(!x[i].b)
			break;
		else
			printf("%d %d\n",x[i].a,x[i].b);
	}
	return 0;
}

