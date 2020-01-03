#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,len,a,m,n;
	char s[503];
	cin.get(s,503);
	len=strlen(s);
	cin>>a>>m>>n;
	for(i=a-1;i<len;i+=m+1)
	{
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
			s[i]+=n;
		if(s[i]>'Z'&&s[i]<'a')
		{
			s[i]-=26;
		}
		if(s[i]>'z')
		{
			s[i]-=26;
		}
	}
	for(i=0;i<len;i++)
	{
		cout<<s[i];
	}
	cout<<endl;
	return 0;
}
