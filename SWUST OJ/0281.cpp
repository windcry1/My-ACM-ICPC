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
	int n,u,d;
	while(scanf("%d%d%d",&n,&u,&d)!=EOF)
	{
		if(n==0&&u==0&&d==0)
			return 0;
		int time=0;
		while(1)
		{
			time++;
			n-=u;
			if(n<=0)
			{
				break;
			}
			time++;
			n+=d;
		}
		printf("%d\n",time);
	}
	return 0;
}

