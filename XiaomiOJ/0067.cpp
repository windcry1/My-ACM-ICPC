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
	cin>>n;
	queue<int> q;
	for(int i=1;i<=500;i++)
		q.push(i);
	int cnt=0,t=0,tmp;
	while(!q.empty())
	{
		t++;
		tmp=q.front();
		q.pop();
		if(t%3==0)
			cnt++;
		else q.push(tmp);
		if(cnt==n)
		{
			cout<<tmp<<endl;
			break;
		}
	}
 	return 0;
}

