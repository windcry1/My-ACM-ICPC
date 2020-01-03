#include<stdio.h> 
#include<algorithm>
using namespace std;
int main()
{
//	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
//	freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,a[1001];
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			if(((i+1)%10)==0||i==n-1)
				printf("%d\n",a[i]);
			else
				printf("%d  ",a[i]);
		}
	}
	return 0;
}

