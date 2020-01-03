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
bool check(int t)
{
	while(t)
	{
		if(t%10==7)
			return false;
		t/=10;
	}
	return true;
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,cnt=0;
	cin>>n;
	for(int i=1;i<10000000;i++)
	{
		if(i%7==0||!check(i))
			continue;
		else cnt++;
		if(cnt==n)
		{
			cout<<i<<endl;
			break;
		}
	}
 	return 0;
}

