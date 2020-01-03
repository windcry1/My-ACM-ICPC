#include<bits/stdc++.h>
using namespace std;
int sum[250001];
int main()
{
	int l,m,n,a[501],b[501],c[501],d,s,x,time=1,i,j,L,R,mid;
	bool flag;
	while(cin>>l>>n>>m)
	{
		for(i=0;i<l;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
			cin>>b[i];
		for(i=0;i<m;i++)
			cin>>c[i];
		d=0;
		for(i=0;i<l;i++)
		{
			for(j=0;j<n;j++)
			{
					sum[d++]=a[i]+b[j];
			}
		}
		sort(sum,sum+d);//¶Ôsum½øÐÐÅÅÐò
		cin>>s;
		cout<<"Case "<<time++<<":"<<'\n';
		while(s--)
		{
			cin>>x;
			flag=false;
			for(i=0;i<m;i++)
			{
				L=0;R=d-1;
				while(L<=R)
				{			
					
					mid=(L+R)/2;
					if(sum[mid]+c[i]==x)
					{
						flag=true;
						break;
					}
					else if(sum[mid]+c[i]<x)
						L=mid+1;
					else
						R=mid-1;
				}
				if(flag==true)
					break;
			}
				if(flag==true)
					cout<<"YES"<<endl;
				else
					cout<<"NO"<<endl;
		} 
	}
	return 0;
}
