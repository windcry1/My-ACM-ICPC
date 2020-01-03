#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
	if(a>b)
        return true;
    else
        return false;
}
int a[1000001];
int main()
{
	int n,m,i;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		sort(a,a+n,cmp);
		for(i=0;i<m;i++)
		{
			if(i==m-1)
				printf("%d\n",a[i]);
			else
				printf("%d ",a[i]);
		}
	}
	return 0;
}
