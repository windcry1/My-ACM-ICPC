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
const int MMAX=2147483647;
const int mod=1e9+7;

int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	double a,b;
	cin>>a>>b;
	if(b==0)
		cout<<a<<"/"<<b<<"="<<"Error";
	else
	{
		if(b<0)
			cout<<a<<"/("<<b<<")="<<fixed<<setprecision(2)<<a/b<<endl;
		else
			cout<<a<<"/"<<b<<"="<<fixed<<setprecision(2)<<a/b<<endl;
	}
 	return 0;
}

