#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str1[103],str2[103],r[4],c1[2],c2[2];
	int len1,len2;
	while(cin<<str1<<str2)
	{
		len1=strlen(str1);
		len2=strlen(str2);
		if(len1>=2)
		{
			c1[0]=str1[0];
			c1[1]=str1[1];
		}
		if(len1==1)
		{
			c1[1]=str1[0];
		}
		if(len2>=2)
		{
			c2[0]=str2[0];
			c2[1]=str2[1];
		}
		if(len2==1)
		{
			c2[1]=str2[0];
		}
		if(c2[1]+c1[1]-'0'-'0'>=10)
		{
			r[0]=c2[1]+c1[1]-'0'-10;
			r[1]++;
		}
		else
			r[0]=c1[1]+c2[1]-'0';
		if(r[1]+c1[0]+c2[0]-'0'-'0'>=10)
		{
			r[1]+=c1[0]+c2[0]-'0'-10;
			r[2]++;
		}
		else
			r[1]+=c1[0]+c2[0]-'0'-10;
		for(i=3;i>=0;i--)
		{
			if(i!='\0')
			cout<<r[i]<<endl;
		}
	}
	return 0;
}
