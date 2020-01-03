#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[256],len,i,b[256],num=0,count=0;
	char s[1001],str[52][1001],temp[1001];
	num=0;count=0;
	memset(a,0,sizeof(a));
	memset(str,0,sizeof(str));
	memset(temp,0,sizeof(temp));
	memset(s,0,sizeof(s));
	while(cin>>n)
	{
	scanf("%s",s);
	len=strlen(s);
	for(int i=0;i<len;i++)
	{
		a[s[i]]++;
	}
	for(int i=0;i<n;i++)
		scanf("%s",str[i]);
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(strcmp(str[i],str[i+1])>0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[i+1]);
				strcpy(str[i+1],temp);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		memset(b,0,sizeof(b));
		num=0;
		len=strlen(str[i]);
		for(int j=0;j<len;j++)
		{
			b[str[i][j]]++;
		}
		for(int j=0;j<256;j++)
		{
			if(a[j]==b[j])
			{
				num++;
			}
		}
		if(num==256)
		{
			printf("%s\n",str[i]);
			count++;
		}
	}
	cout<<count<<endl;
	}
}
