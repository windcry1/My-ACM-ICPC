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
	freopen("C:\\Users\\LENOVO\\Desktop\\0.in","w",stdout);
	int x,y;
	cin>>y>>x;
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			srand(time(NULL)+i*763+j);
			int p=rand();
			if(p%2==0)
				cout<<'*';
			else cout<<'.';
		}
		cout<<endl;
	}
 	return 0;
}

