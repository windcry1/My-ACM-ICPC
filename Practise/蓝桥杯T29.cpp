#include<bits/stdc++.h>
using namespace std;
int main()
{
	int len,sum=0;
	char s1[10001],s2[10001];
	scanf("%s%s",s1,s2);
	len=strlen(s1);
	for(int i=0;i<len;i++)
	{
			if(s1[i]!=s2[i])
			{
				for(int j=i+1;j<len;j++)
				{
					if(s1[j]!=s2[j])
					{
						sum+=j-i;
						i=j; 
						break;
					}
				}
			}
	}
	cout<<sum<<endl;
	return 0;
}
