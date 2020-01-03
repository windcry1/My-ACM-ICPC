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
bool check(int i)
{
	int a[10]={0};
	while(i!=0)
	{
		a[i%10]++;
		i/=10;
	}
	return a[2]&&a[0]&&a[1]&&a[4];
}
int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int l,r,sum=0;
	for(int i=0;i<1000000000;i++)
	{
		if(check(i))
		sum++; 
			cout<<sum<<',';
	}
//	while(scanf("%d%d",&l,&r)!=EOF)
//	{
//	}
	return 0;
}

