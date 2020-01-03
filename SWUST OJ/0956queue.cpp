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
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;

int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	queue<int> q;
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		q.push(i);
	int count=0;
	while(q.size()!=1)
	{
		count++;
		int t=q.front();
		if(!(count%k))
			q.pop();
		else
		{
			q.pop();
			q.push(t);
		}
	}
	printf("%d",q.front());
	return 0;
}

