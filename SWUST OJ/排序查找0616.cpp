#include<bits/stdc++.h>
using namespace std;
void sort(int *a, int n) 
{
    int c,t,temp,max;
    for(int i=0;i<n;i++)
    {
    	max=0;
    	for(int j=i;j<n;j++)
    	{
    		if(max<a[j])
    		{
    			max=a[j];
    			t=j;
    		}
		}
		temp=a[i];
		a[i]=a[t];
		a[t]=temp;
	}
}
int main()
{
	int n,a[101],t,i,num=0,s;
	cin>>n;
	memset(a,0,sizeof(a));
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>t;
	sort(a,n);
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<' ';
		num++;
		if(num==10)
		{
			cout<<endl;
			num=0;
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==t)
		{
			break;
		}
	}
	if(num!=0)
		cout<<endl;
	cout<<i+1<<endl;
	return 0;
}
