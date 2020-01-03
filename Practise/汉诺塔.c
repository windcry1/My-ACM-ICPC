#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,temp;
	scanf("%d",&t); 
	while(t--)
	{
		scanf("%d",&n);
		temp=pow(2,n/2)+pow(2,n-n/2)-2;
		printf("%d\n",temp);
	}
	return 0;
}
