//Author: WindCry1
//Mail: lanceyu120@gmail.com
//Website: https://windcry1.com
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
#include<list>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int q;
	cin>>q;
	while(q--)
	{
		int n,m;
		cin>>n>>m;
		char a[n+10][m+10];
		int flag1[n+10]={0},flag2[m+10]={0};
		for(int i=0;i<n;i++)
		{
			int flag=0;
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
				if(a[i][j]=='.')
					flag++;
			}
			flag1[i]=flag;
		}
		for(int i=0;i<m;i++)
		{
			int flag=0;
			for(int j=0;j<n;j++)
				if(a[j][i]=='.')
					flag++;
			flag2[i]=flag;
		}
		int MIN=MMAX;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				if(a[i][j]=='*')
					MIN=min(MIN,flag1[i]+flag2[j]);
				else MIN=min(MIN,flag1[i]+flag2[j]-1);
			}
		cout<<MIN<<endl;
	}
 	return 0;
}

