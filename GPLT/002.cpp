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
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,a[]={1,7,17,31,49,71,97,127,161,199,241,287,337,391,449,511,577,647,721,799,881,967,1057};
	char c;
	while(cin>>n>>c)
	{
		int i;
		for(i=0;i<23;i++)
		{
			if(a[i]>n)
			{
				for(int j=2*i-1;j>=1;j-=2)
				{
					int t=j,t1=(2*i-1-j)/2;
					while(t1--)
						cout<<' ';
					while(t--)
					{
						cout<<c;
					}
					cout<<endl;
				}
				for(int j=3;j<2*i+1;j+=2)
				{
					int t=j,t1=(2*i-1-j)/2;
					while(t1--)
						cout<<' ';
					while(t--)
						cout<<c;
					cout<<endl;
				}
				cout<<n-a[i-1]<<endl;
				break;
			}
		}
	}
	return 0;
}

