#include <stdio.h>
int main()
{
		int a,b,i,j,I,num=0,t;
		while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b<a)
		{
			t=b;
			b=a;
			a=t;
		} 
		for(i=a;i<=b;i++)
		{
			j=0;
			for(I=2;I<i;I++)
			{
				if(i%I==0)
				{
					j++;
				}
			}
			if(j==0)
            num++;
		}
		printf("%d\n",num);
		num=0;
	}
	return 0;
}
