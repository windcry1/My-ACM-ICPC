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
#include<map>
#include<algorithm>
#include<complex>
#include<stack>
#include<bitset>
#include<iomanip>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;

int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	char s1[1100],s2[1100],s3[1100];
	while(cin>>s1>>s2)
	{
		int MIN=MMAX;
		int len1=strlen(s1),len2=strlen(s2);
		for(int i=0;i<=len1;i++)
		{
			memset(s3,'\0',sizeof(s3));
			for(int j=0;j<len1;j++)
				s3[j]=s1[j]-'0';
			for(int j=i;j<i+len2;j++)
				s3[j]+=s2[j-i];
			for(int j=0;j<len2+i;j++)
				if(!isdigit(s3[j]))
					s3[j]+='0';
			int flag=0;
			if(i+len2>len1)
			{
				for(int j=0;j<i+len2;j++)
					if(s3[j]>'3')
						flag=1;
				if(flag)continue;
				if(MIN>i+len2)MIN=i+len2;
			}
		}
		for(int i=0;i<len2;i++)
		{
			memset(s3,'\0',sizeof(s3));
			for(int j=0;j<len2;j++)
				s3[j]=s2[j]-'0';
			for(int j=i;j<i+len1;j++)
				s3[j]+=s1[j-i];
			for(int j=0;j<len1+i;j++)
				if(!isdigit(s3[j]))
					s3[j]+='0';
			int flag=0;
			if(len1+i>len2)
			{
				for(int j=0;j<i+len1;j++)
					if(s3[j]>'3')
						flag=1;
				if(flag)continue;
				if(MIN>i+len1)MIN=i+len1;
			}
		}
		if(len1<len2)
		{
			for(int i=0;i<len2-len1;i++)
			{
				memset(s3,'\0',sizeof(s3));
				for(int j=0;j<len2;j++)
					s3[j]=s2[j]-'0';
				for(int j=i;j<i+len1;j++)
					s3[j]+=s1[j-i];
				for(int j=0;j<len2;j++)
					if(!isdigit(s3[j]))
						s3[j]=s3[j]+'0';
				int flag=0;
				for(int j=0;j<len2;j++)
					if(s3[j]>'3')
						flag=1;
				if(flag)continue;
				if(MIN>len2)MIN=len2;
			}
		}
		if(len2<len1)
		{
			for(int i=0;i<len1-len2;i++)
			{
				memset(s3,'\0',sizeof(s3));
				for(int j=0;j<len1;j++)
					s3[j]=s1[j]-'0';
				for(int j=i;j<i+len2;j++)
					s3[j]+=s2[j-i];
				for(int j=0;j<len1;j++)
					if(!isdigit(s3[j]))
						s3[j]+='0';
				int flag=0;
				for(int j=0;j<len1;j++)
					if(s3[j]>'3')
						flag=1;
				if(flag)continue;
				if(MIN>len1)MIN=len1;
			}
		}
		if(len2==len1)
		{
			memset(s3,'\0',sizeof(s3));
			for(int i=0;i<len1;i++)
				s3[i]=s1[i]+s2[i]-'0';
			int flag=0;
			for(int j=0;j<len1;j++)
				if(s3[j]>'3')
					flag=1;
			if(!flag&&MIN>len1)MIN=len1;
		}
		cout<<MIN<<endl;
	}
 	return 0;
}

