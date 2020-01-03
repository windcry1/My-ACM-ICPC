#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,num=0,i=0,j=0,len,k,a[10001]={0};
	char c,t[8];
	cin>>n;
	while(scanf("%d",&a[i++])!=EOF);
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
