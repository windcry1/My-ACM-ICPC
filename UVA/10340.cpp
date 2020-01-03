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
char s1[100001],s2[100001];
int main()
{
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	while(scanf("%s%s",s1,s2)!=EOF)
	{
		int len1=strlen(s1);
		int len2=strlen(s2);
		int num=0;
		for(int i=0;i<len2;i++)
		{
			if(s2[i]==s1[num])
				num++;
		}
		if(num==len1)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}

