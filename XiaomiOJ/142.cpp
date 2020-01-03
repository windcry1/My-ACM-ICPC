//Author:LanceYu
#include<iostream>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
int hash1[40000001],hash2[40000001];
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	for(int i=-50;i<=50;i++)
	{
		for(int j=-50;j<=50;j++)
		{
			for(int k=-50;k<=50;k++)
			{
				int t=a*i*i*i+b*j*j*j+c*k*k*k;
				if(t<0)
					hash1[-t]++;
				else if(t>=0)
					hash2[t]++;
			}
		}
	}
	ll sum=0;
	for(int i=-50;i<=50;i++)
	{
		for(int j=-50;j<=50;j++)
		{
			int t=d*i*i*i+e*j*j*j;
			if(t<0)
				sum+=hash1[-t];
			else if(t>=0)
				sum+=hash2[t];
		}
	}
	cout<<sum<<endl;
 	return 0;
}

