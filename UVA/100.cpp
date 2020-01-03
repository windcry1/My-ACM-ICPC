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
int f(int n)
{
	int t=1;
	while(n-1)
	{
		n=(n%2)?(3*n+1):(n/2);
		t++;
	}
	return t;
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int i,j;
	while(cin>>i>>j)
	{
		cout<<i<<" "<<j<<" ";
		if(i>j)
			swap(i,j);
		int M=0;
		for(int k=i;k<=j;k++)
		{
			if(M<f(k))
				M=f(k);
		}
		cout<<M<<endl;
	}
 	return 0;
}

