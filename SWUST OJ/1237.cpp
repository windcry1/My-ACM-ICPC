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
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
 	//ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;
	while(cin>>s)
	{
		int sum1=0,sum2=0,a[8]={0},b[8]={0};
		int len=s.length();
		for(int i=0;i<4;i++)
		{
			sum1+=s[i]-'0';
			a[i]=s[i]-'0';
		}
		for(int i=len-4;i<len;i++)
		{
			sum2+=s[i]-'0';
			b[i-len+4]=s[i]-'0';
		}
		if(sum1==sum2)
		{
			cout<<"0"<<"\r\n";
			continue;
		}
		else if(sum1>sum2)
		{
			int cha=sum1-sum2;
			for(int i=0;i<4;i++)
			{
				b[i]=9-b[i];
				a[4+i]=b[i];
			}
			sort(a,a+8,cmp);
			int num=0;
			for(int i=0;i<8;i++)
			{
				if(a[i]>=cha)
				{
					num++;
					break;	
				}
				else if(a[i]<cha)
				{
					num++;
					cha-=a[i];
				}
			}
			cout<<num<<"\r\n";
		}
		else
		{
			int cha=sum2-sum1;
			for(int i=0;i<4;i++)
			{
				a[i]=9-a[i];
				b[4+i]=a[i];
			}
			sort(b,b+8,cmp);
			int num=0;
			for(int i=0;i<8;i++)
			{
				if(b[i]>=cha)
				{
					num++;
					break;	
				}
				else if(b[i]<cha)
				{
					num++;
					cha-=b[i];
				}
			}
			cout<<num<<"\r\n";
		}
	}
	return 0;
}

