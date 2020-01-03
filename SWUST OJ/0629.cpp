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
int a[4];
void check(int n)
{
	int i=0;
	while(n!=0)
	{
		a[i++]=n%10;
		n/=10;
		if(i==5)
			break;
	}
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,times=0;
	cin>>n;
	while(n!=6174)
	{
		check(n);
		sort(a,a+4);
		int op1=0,op2=0;
		for(int i=0;i<4;i++)
		{
			op1*=10;
			op1+=a[i];
		}
		sort(a,a+4,greater<int>());
		for(int i=0;i<4;i++)
		{
			op2*=10;
			op2+=a[i];
		}
		cout<<"["<<++times<<"]: "<<op2<<"-"<<op1<<"="<<op2-op1<<endl;
		n=op2-op1;
	}
 	return 0;
}

