//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<iosfwd>
#include<sstream>
#include<fstream>
#include<cwchar>
#include<iomanip>
#include<ostream>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<valarray>
#include<bitset>
#include<iterator>
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
	int n,flag[4],num;
	char s[51];
	while(scanf("%d",&n)!=EOF)
	{
		while(n--)
		{
			num=0;
			memset(flag,0,sizeof(flag));
			scanf("%s",s);
			int len=strlen(s);
			for(int i=0;i<len;i++)
			{
				if(s[i]>='A'&&s[i]<='Z'&&!flag[0])
				{
					flag[0]++;
					num++;
				}
				if(s[i]>='a'&&s[i]<='z'&&!flag[1])
				{
					flag[1]++;
					num++;
				}
				if(s[i]>='0'&&s[i]<='9'&&!flag[2])
				{
					flag[2]++;
					num++;
				}
				if((s[i]=='~'||s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='^')&&!flag[3])
				{
					flag[3]++;
					num++;
				}
			}
			if(len>=8&&len<=16&&num>=3)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	
	return 0;
}

