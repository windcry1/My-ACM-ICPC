#include<stdio.h>
int a[2000000000000001]={0}; 
int main()

{

	long long  n;

	while(scanf("%ld",&n)!=EOF)

	{	

		for(int i=1;i<=n;i++)

		{

			for(int j=1;j<=i;j++)

			{

				if(j%i==0)

				a[j]++;

			}

		}

		int sum=0;

		for(int i=1;i<=n;i++)

		{

			if(a[i]%2!=0)

			{

				sum++;

			}

		}

		printf("%d\n",sum);

	}

	return 0;

}
