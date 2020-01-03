//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<cctype>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<cmath>
#include<stack>
#include<bitset>
#include<iomanip>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;
const double PI=3.1415926535897932;
int main()
{
	//ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,num;
	double x[10001],y[10001],z[10001],a[10001],b[10001],t;
	while(cin>>n)
	{
		double min=-MMAX;
		for(int i=0;i<n;i++)
		{
			cin>>a[i]>>b[i];
			x[i]=sin(a[i]*PI/180);
			y[i]=sin(b[i]*PI/180)*cos(a[i]*PI/180);
			z[i]=cos(b[i]*PI/180)*cos(a[i]*PI/180);
			//转三维坐标 
		}
		for(int i=0;i<n;i++)
		{
			double temp=1;
			for(int j=0;j<n;j++)
			{
				t=x[i]*x[j]+y[i]*y[j]+z[i]*z[j];//向量相乘 
				if(temp>t)
					temp=t;
			}
			if(min<temp)
			{
				min=temp;
				num=i;
			}
		}
		cout<<fixed<<setprecision(2)<<a[num]<<' '<<b[num]<<endl;
	}
	return 0;
}

