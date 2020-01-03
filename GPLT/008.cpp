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

int main()
{
	//ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int l,r;
	while(cin>>l>>r)
	{
		int sum=0;
		int count=1;
		for(int i=l;i<=r;i++)
		{
			sum+=i;
			if(count<5&&i!=r)
			{
				printf("%5d",i);
				count++;
			}
			else
			{
				printf("%5d\n",i);
				count=1;
			}
		}
		cout<<"Sum = "<<sum<<endl;
	}
	return 0;
}

