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
	ll n,num=0,numx,flag=10,len,i;
	char str[10001];
	cin>>n;
	while(n--)
	{
		scanf("%s",str);
		if(strcmp(str,"CLEAR")==0)
		{
			num=0;
		}
		if(strcmp(str,"NUM")==0)
		{
			num=0;
			scanf("%s",str);
			len=strlen(str);
			for(int i=len-1;i>=0;i--)
			{
				if(str[i]>='0'&&str[i]<='9')
				{
					num+=(str[i]-'0')*pow(flag,len-i-1);
				}
				if(str[i]>='A'&&str[i]<='Z')
				{
					num+=(str[i]-'A'+10)*pow(flag,len-i-1);
				}
			}
		}
		if(strcmp(str,"CHANGE")==0)
		{
			scanf("%lld",&flag);
		}
		if(strcmp(str,"ADD")==0)
		{
			n--;
			scanf("%s",str);
			scanf("%s",str);
			len=strlen(str);
			for(int i=len-1;i>=0;i--)
			{
				if(str[i]>='0'&&str[i]<='9')
				{
					num+=(str[i]-'0')*pow(flag,len-i-1);
				}
				if(str[i]>='A'&&str[i]<='Z')
				{
					num+=(str[i]-'A'+10)*pow(flag,len-i-1);
				}
			}
		}
		if(strcmp(str,"SUB")==0)
		{
			n--;
			scanf("%s",str);
			scanf("%s",str);
			len=strlen(str);
			for(int i=len-1;i>=0;i--)
			{
				if(str[i]>='0'&&str[i]<='9')
				{
					num-=(str[i]-'0')*pow(flag,len-i-1);
				}
				if(str[i]>='A'&&str[i]<='Z')
				{
					num-=(str[i]-'A'+10)*pow(flag,len-i-1);
				}
			}
		}
		if(strcmp(str,"MUL")==0)
		{
			n--;
			scanf("%s",str);
			scanf("%s",str);
			len=strlen(str);
			numx=0;
			for(int i=len-1;i>=0;i--)
			{
				if(str[i]>='0'&&str[i]<='9')
				{
					numx+=(str[i]-'0')*pow(flag,len-i-1);
				}
				if(str[i]>='A'&&str[i]<='Z')
				{
					numx+=(str[i]-'A'+10)*pow(flag,len-i-1);
				}
			}
			num*=numx;
		}
		if(strcmp(str,"DIV")==0)
		{
			n--;
			numx=0;
			scanf("%s",str);
			scanf("%s",str);
			len=strlen(str);
			for(int i=len-1;i>=0;i--)
			{
				if(str[i]>='0'&&str[i]<='9')
				{
					numx+=(str[i]-'0')*pow(flag,len-i-1);
				}
				if(str[i]>='A'&&str[i]<='Z')
				{
					numx+=(str[i]-'A'+10)*pow(flag,len-i-1);
				}
			}
			num/=numx;
		}
		if(strcmp(str,"MOD")==0)
		{
			n--;
			numx=0;
			scanf("%s",str);
			scanf("%s",str);
			len=strlen(str);
			for(int i=len-1;i>=0;i--)
			{
				if(str[i]>='0'&&str[i]<='9')
				{
					numx+=(str[i]-'0')*pow(flag,len-i-1);
				}
				if(str[i]>='A'&&str[i]<='Z')
				{
					numx+=(str[i]-'A'+10)*pow(flag,len-i-1);
				}
			}
			num%=numx;
		}
		if(strcmp(str,"EQUAL")==0)
		{
			memset(str,0,sizeof(str));
			int t=num; 
			for(i=0;;i++)
			{
				numx=num%flag;
				if(numx>=0&&numx<=9)
					str[i]=numx+'0';
				if(numx>=10&&numx<=35)
					str[i]=numx+'A'-10;
				num/=flag;
				if(num==0)
					break;
			}
			for(int j=i;j>=0;j--)
				putchar(str[j]);
			num=t;
		}
	}
	return 0;
}

