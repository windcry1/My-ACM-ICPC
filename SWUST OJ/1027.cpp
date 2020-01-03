//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<cctype>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<stack>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;
string boy[100001];
string girl[100001];
int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m;
	queue<string> qb,qg;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>boy[i];
		qb.push(boy[i]);
	}
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>girl[i];
		qg.push(girl[i]);
	}
	int t;
	cin>>t;
	string t1,t2;
	while(--t)
	{
		t1=qb.front();
		qb.pop();
		qb.push(t1); 
		t2=qg.front();
		qg.pop();
		qg.push(t2);
	}
	cout<<qb.front()<<' '<<qg.front();
	return 0;
}

