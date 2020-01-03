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
bool is_prime(int n)
{
	for(int i=2;i<sqrt(n)+1;i++)
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
	if(n==2)
		cout<<"1";
	else if(n%2==0)
		cout<<"2";
	else{
		if(is_prime(n))
			cout<<"1";
		else if(is_prime(n-2))
			cout<<"2";
		else cout<<"3";
	}
 	return 0;
}

