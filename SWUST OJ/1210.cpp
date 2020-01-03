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
#include<complex>
#include<cmath>
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
	int n;
	while(cin>>n)
	{
		while(n--)
		{
			int t,sum1=0,sum2=0;
			string s;
			cin>>t>>s;
			for(int i=0;i<s.length();i++)
			{
				if(s[i]=='0')
					sum1++;
				else if(s[i]=='1')
					sum2++;
			}
			printf("%d\n",abs(sum1-sum2));
		}
	}
	return 0;
}

