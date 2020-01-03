#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,num=0,i=0,j=0,len,k,a[10001]={0};
	char c,t[8];
	cin>>n;
	getchar();
	while(num!=n)
	{
		c=getchar();
		if(c==' ')
		{
			while(1)
			{
				c=getchar();
				if(c!=' '&&c!='\n')
				{
					i++;
					j=0;
					break;
				}
				if(c!=' '&&c=='\n')
					break;
			}
		}
		if(c=='\n')
		{
			i++;
			j=0;
			num++;
		}
		else
		{
			a[i]*=10;
			a[i]+=c-'0';
		}
	}
	i--;
	sort(a,a+i+1);
	for(int j=0;j<i-1;j++)
	{
		if(a[j+1]-a[j]==2)
		{
			cout<<(a[j+1]+a[j])/2<<' ';
			break;
		}
	}
	for(int j=0;j<i-1;j++)
	{
		if(a[j+1]-a[j]==0)
		{
			cout<<a[j]<<endl;
			break;
		}
	}
	return 0;
}
