#include<stdio.h>
int main()
{
	long long AH,AM,AS,BH,BM,BS,n,i,H,M,S;	
		while(scanf("%lld%lld%lld%lld%lld%lld",&AH,&AM,&AS,&BH,&BM,&BS)!=EOF)
		{
			int H=0;M=0;S=0;
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
		printf("%02lld:%02lld:%02lld\n",H,M,S);
		}
	return 0;
}
