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
int comp(char a[],char b[],int len1,int len2)
{
	int i,j,k,MAX=0,num;
	for(i=0;i<len1;i++)
	{
		for(j=0;j<len2;j++)
		{
			num=0;
			if(a[i]==b[j])
			{
				for(k=0;i+k<len1,j+k<len2;k++)
				{
					if(a[i+k]==b[j+k])
						num++;
					else
						break;
				}
			}
			if(num>MAX)
				MAX=num;
		}
	}
	return MAX;
}
int main()
{
	int len1,i,j,len2,num,MAX;
	char a[101],b[101];
	i=0;
	while((a[i++]=getchar())!='\n');
	a[i-1]='\0';
	i=0; 
	while((b[i++]=getchar())!='\n');
	b[i-1]='\0';
	MAX=0;
	num=0;
	len1=strlen(a);
	len2=strlen(b);
	for(i=0;i<len1;i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
			a[i]=a[i]+'a'-'A';
	}
	for(i=0;i<len2;i++)
	{
		if(b[i]>='A'&&b[i]<='Z')
			b[i]=b[i]+'a'-'A';
	}
	MAX=comp(a,b,len1,len2);
	//printf("%d\n",MAX);
	printf("%.3f\n",2.0*MAX/(len1+len2));
	return 0;
}

