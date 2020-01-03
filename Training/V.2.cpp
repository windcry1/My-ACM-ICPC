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
const ll mod=1e9+7;

int main()
{
	//ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;
	int n,a[256];
	while(cin>>n)
	{
		while(n--)
		{
			memset(a,0,sizeof(a));
			cin>>s;
			int len=s.length();
			for(int i=0;i<len;i++)
				a[s[i]]++;
			int flag=0;
			int result=1;
			if(len%2==1)
			{
				int sum=len/2;
				for(int i=0;i<256;i++)
				{
					if(!a[i])
						continue;
					else
					{
						if(flag&&a[i]%2==1)
						{
							result=0;
							break;
						}
						else if(a[i]%2==1)
						{
							flag=1;
							int t=1;
							for(int j=sum;j>a[i]/2;j--)
							{
								result*=j;
								while(result%t==0&&t<=a[i]/2)
								{
									result/=t;
									t++;
								}
								result%=mod;
							}
							while(result%t==0&&t<=a[i]/2)
							{
								result/=t;
								t++;
							}
							sum-=a[i]/2;
						}
						else
						{
							int t=1;
							for(int j=sum;j>a[i]/2;j--)
							{
								result*=j;
								while(result%t==0&&t<=a[i]/2)
								{
									result/=t;
									t++;
								}
								result%=mod;
							}
							while(result%t==0&&t<=a[i]/2)
							{
								result/=t;
								t++;
							}
							sum-=a[i]/2;
						}
					}
				}
				cout<<result<<endl;
			}
			else if(len%2==0)
			{
				int sum=len/2;
				for(int i=0;i<256;i++)
				{
					if(!a[i])
						continue;
					if(a[i]%2==1)
					{
						result=0;
						break;
					}
					else
					{
						int t=1;
						for(int j=sum;j>a[i]/2;j--)
						{
							result*=j;
							while(result%t==0&&t<=a[i]/2)
							{
								result/=t;
								t++;
							}
							result%=mod;
						}
						while(result%t==0&&t<=a[i]/2)
						{
							result/=t;
							t++;
						}
						sum-=a[i]/2;
					}
				}
				cout<<result<<endl;
			}
		}
	}
	return 0;
}

