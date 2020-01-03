#include<stdio.h>
main()
{
	int nian,yue,ri;
	int i,sum1=0,sum,sum2=0,yushu;
	while(scanf("%d %d %d",&nian,&yue,&ri)!=EOF)
	{
		sum1=0;sum2=0;
		for(i=1;i<nian;i++)
		{
			if((i%4==0&&i%100!=0)||(i%400==0))
			{
				sum1+=366;
			}
			else
			{
				sum1+=365;
			}
		}
		switch (yue)
		{
			case 12:
				sum2+=30;
			case 11:
				sum2+=31;
			case 10:
				sum2+=30;
			case 9:
				sum2+=31;
			case 8:
				sum2+=31;		
			case 7:
				sum2+=30;
			case 6:
				sum2+=31;
			case 5:
				sum2+=30;
			case 4:
				sum2+=31;	
			case 3:
				if((nian%4==0&&nian%100!=0)||(nian%400==0))
				{
					sum2+=29;
				}
				else
				{
					sum2+=28;
				}
			case 2:
				sum2+=31;	
			case 1:
				sum2+=0;
				break;				
		}
		sum=sum1+sum2+ri;
		yushu=sum%7;
		switch(yushu)
		{
			case 0:
				printf("星期天\n");
				break;
			case 1:
				printf("星期一\n");
				break;
			case 2:
				printf("星期二\n");
				break;
			case 3:
				printf("星期三\n");
				break;
			case 4:
				printf("星期四\n");
				break;
			case 5:
				printf("星期五\n");
				break;
			case 6:
				printf("星期六\n");	
				break;					
		}
	}
}
