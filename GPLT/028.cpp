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
bool isprime(int n)
{
	if(n==1)
		return false;
	if(n==2)
		return true;
	for(int i=2;i<=sqrt(n)+1;i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n;
	while(n--)
	{
		int t;
		cin>>t;
		if(isprime(t))
			cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
 	return 0;
}

