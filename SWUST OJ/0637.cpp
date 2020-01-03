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
	int a[1001];
	for(int i=0;i<n;i++)
		a[i]=i+1;
	do{
		int t=0,flag=0;
		for(int i=0;i<n;i++)
		{
			t*=10;
			t+=a[i];
			if(t%(i+1)!=0)
				flag=1;
		}
		if(!flag)
		{
			for(int i=0;i<n;i++)
				cout<<a[i];
			cout<<endl;
			break;
		}
	}while(next_permutation(a,a+n));
 	return 0;
}

