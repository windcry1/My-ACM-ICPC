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

int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,k,a[10001];
	cin>>k>>n;
	int i=0;
	while(n!=0)
	{
		a[i++]=n%2;
		n/=2;
	}
	int sum=0;
	for(int j=0;j<i;j++)
	{
		if(a[j])
			sum+=pow(k,j);
	}
	printf("%d\n",sum);
	return 0;
}

