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

int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int x,y,z;
	cin>>x>>y>>z;
	if(abs(x-y)<z)
	{
		cout<<"?"<<endl;
		return 0;
	}
	else if(x==y&&z==0)
	{
		cout<<"0"<<endl;
		return 0;
	}
	else
	{
		if(x-y>z&&x-y>0)
			cout<<"+"<<endl;
		else if(y-x>z&&y-x>0)
			cout<<"-"<<endl;
		else cout<<"?"<<endl;
	}
 	return 0;
}

