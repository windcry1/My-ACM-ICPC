//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<iosfwd>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<array>
#include<valarray>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
//const double e=2.718281828;
const double PI=3.141592653589793;
const int MMAX=2147483647;
const int mod=1e9+7;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;

int main()
{
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;
	char s[81],a[81],b[81];
	scanf("%d",&T);
	while(T--)
	{
		int flag,num=0;
		scanf("%s",s);
		int len=strlen(s);
		for(int i=1;i<=len;i++)
		{
			flag=1;
			if(!(len%i))
			{
				for(int j=0;j<len-i;j++)
				{
					if(s[j+i]!=s[j])
						flag=0;
				}
			}
			else
			flag=0;
			if(flag)
			{
				num=i;
				break;
			}
		}
		if(flag)
		{
			printf("%d\n",num);
			if(T)
				printf("\n");
		}
	}
	return 0;
}

