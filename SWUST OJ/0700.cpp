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
    char s[101];
    int n,len,i;
    scanf("%s",s);
    scanf("%d",&n);
    if(n==strlen(s))
	{
        printf("0");
        return 0; 
    } 
	while(n>0)
	{
	    i=0;
	    len=strlen(s);
	    while(i<len&&s[i]<=s[i+1])
			i++;
	    while(i<len)
		{
	        s[i]=s[i+1];
	        i++;
	    }
		n--;
    }
	i=0;
    len=strlen(s);
    while(s[i]=='0'&&i<len)
		i++;
    if(i==len)
		printf("0\n");
    else
	{
        for(;i<len;i++)
            printf("%c",s[i]);
        printf("\n");
    }
    return 0;
}

