//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<cctype>
#include<fstream>
#include<iosfwd>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<array>
#include<stack>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
//const double e=2.718281828;
const double PI=3.141592653589793;
const int MMAX=2147483647;
const int mod=1e9+7;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
int t[110][110];
int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n;
	int a,b,c,d;
	while(n--)
	{
		cin>>a>>b>>c>>d;
		for(int i=a;i<c;i++)
			for(int j=b;j<d;j++)
				t[j][i]=1;
	}
	int count=0;
	for(int i=0;i<110;i++)
		for(int j=0;j<110;j++)
			count+=t[i][j];
	cout<<count<<endl;
	return 0;
}

