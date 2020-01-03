#include<stdio.h>
int main()
{
	int AH,AM,AS,BH,BM,BS,n,i,H,M,S;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		H=0;M=0;S=0;
		scanf("%d %d %d %d %d %d",&AH,&AM,&AS,&BH,&BM,&BS);
		if(AS+BS>=60)
		{
			S=AS+BS-60;
			M+=1;
		}
		else
		{
			S=AS+BS;
		}
		if(AM+BM>=60)
		{
			M+=AM+BM-60;
			H+=1;
		}
		else
		{
			M+=AM+BM;
		}
		H+=AH+BH;
		printf("%2d %2d %2d\n",H,M,S);
	}
	return 0;
}
