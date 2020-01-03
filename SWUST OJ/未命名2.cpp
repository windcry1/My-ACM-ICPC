#include<bits/stdc++.h>
using namespace std;
char s[100001];
int main()
{
	long long n,len,sum;
	cin>>n;
	while(n--)
	{ 
		sum=0;
		memset(s,0,sizeof(s));
		scanf("%s",s);
		len=strlen(s);
		for(int i=0;i<len;i++)
		{
			if(s[i]=='A')
				sum+=10*pow(16,len-i-1);
			else if(s[i]=='B')
				sum+=11*pow(16,len-i-1);
			else if(s[i]=='C')
				sum+=12*pow(16,len-i-1);
			else if(s[i]=='D')
				sum+=13*pow(16,len-i-1);
			else if(s[i]=='E')
				sum+=14*pow(16,len-i-1);
			else if(s[i]=='F')
				sum+=15*pow(16,len-i-1);
			else sum+=(s[i]-'0')*pow(16,len-i-1);
		}
		cout<<sum<<endl;
	}
	return 0;
}
