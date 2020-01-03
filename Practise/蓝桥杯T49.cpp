#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i=0;
	char s[101];
	cin>>n; 
	memset(s,0,sizeof(s));
	while(n!=0)
	{
		if(n%16==10)
			s[i++]='A';
		else if(n%16==11)
			s[i++]='B';
		else if(n%16==12)
			s[i++]='C';
		else if(n%16==13)
			s[i++]='D';
		else if(n%16==14)
			s[i++]='E';
		else if(n%16==15)
			s[i++]='F';
		else s[i++]=48+n%16;
		n/=16;
	}
	if(i==0)
		cout<<"0";
	for(int j=i-1;j>=0;j--)
	{
		cout<<s[j]; 
	}
	return 0;
}
