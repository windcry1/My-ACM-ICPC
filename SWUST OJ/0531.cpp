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
	int t,n,len,a[1001];
	char s[1001];
	scanf("%d",&t); 
	while(t--)
	{
		scanf("%d",&n);
		scanf("%s",s);
		len=strlen(s);
		for(int i=0;i<len;i++)
		{
			if(s[i]>='a'&&s[i]<='z')
			{
				a[i]=s[i]-'a';
				if(n>=0)
					a[i]=(a[i]+n)%26;
				else
					a[i]=(a[i]+n+26)%26;
				s[i]=a[i]+'a';
			}
			else if(s[i]>='A'&&s[i]<='Z')
			{
				a[i]=s[i]-'A';
				if(n>=0) 
					a[i]=(a[i]+n)%26;
				else
					a[i]=(a[i]+n+26)%26;
				s[i]=a[i]+'A';
			}
		}
		printf("%s\n",s); 
	}
	return 0;
}

