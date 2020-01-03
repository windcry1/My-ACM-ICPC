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
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;
int a[22];
bool isprime(int n)
{
	for(int i=2;i<sqrt(n)+2;i++)
		if(n%i==0)
			return false;
	return true;
}
int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n;
	int count=0,MAX=-1;
	if(isprime(n))
	{
		cout<<"1"<<'\n'<<n<<endl;
		return 0;
	}
	for(int i=2;i<sqrt(n)+3;i++)
	{
		if(n%i==0)
			count++;
		else
		{
			if(MAX<count)
			{
				MAX=count;
				int k=0;
				for(int j=i-count;j<i;j++)
					a[k++]=j;
			}
			count=0;
		}
	}
	cout<<MAX<<endl;
	for(int i=0;i<MAX;i++)
	{
		if(i!=MAX-1)
			cout<<a[i]<<'*';
		else cout<<a[i]<<endl;
	}
	return 0;
}

