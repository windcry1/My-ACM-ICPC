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
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;

int main()
{
	char s[1001];
	int n,sum[3];
	cin>>n;
	getchar();
	while(n--)
	{
		int flag=0;
		memset(sum,0,sizeof(sum));//初始化 
		scanf("%s",s);
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]=='A')
				sum[flag]++;
			else if(s[i]=='P'&&flag==0)//如果第一次出现P的话 
				flag=1;
			else if(s[i]=='T'&&flag==1)//如果T在P之后且T只出现一次的话 
				flag=2;
			else
			{
				flag=-1;//除此之外的情况返回-1 
				break;
			}
		}
		if(flag==2&&(sum[1]*sum[0]==sum[2])&&sum[1])//满足条件的情况
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}

