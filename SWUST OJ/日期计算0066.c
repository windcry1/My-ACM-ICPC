#include<stdio.h>
struct ri{
int y,m,d;
}sb;
int main()
{
	int y,m,d,total=0;
	scanf("%d%d%d",&y,&m,&d);
	if(m>=13||m<=0)
	{
		printf("Input error!\n");
	} 	
	else if(y%4!=0||((y%100==0)&&(y%400!=0)))
	{
		if((m==1&&d>31)||(m==2&&d>28)||(m==3&&d>31)||(m==4&&d>30)||(m==5&&d>31)||(m==6&&d>30)||(m==7&&d>31)||(m==8&&d>31)||(m==9&&d>30)||(m==10&&d>31)||(m==11&&d>30)||m==12&&d>31)
		{
			printf("Input error!\n");
		}
		else
		{
		switch(m)
		{
			case 1:total+=0;
			break;
			case 2:total+=31;
			break;
			case 3:total+=59;
			break;
			case 4:total+=90;
			break;
			case 5:total+=120;
			break;
			case 6:total+=151;
			break;
			case 7:total+=181;
			break;
			case 8:total+=212;
			break;
			case 9:total+=243;
			break;
			case 10:total+=273;
			break;
			case 11:total+=304;
			break;
			case 12:total+=334;
			break;
		}
			total+=d;
			printf("%d\n",total);
		}
	}
	else
	{
		if((m==1&&d>31)||(m==2&&d>29)||(m==3&&d>31)||(m==4&&d>30)||(m==5&&d>31)||(m==6&&d>30)||(m==7&&d>31)||(m==8&&d>31)||(m==9&&d>30)||(m==10&&d>31)||(m==11&&d>30)||m==12&&d>31)
		{
			printf("Input error!\n");
		}
		else
		{
		switch(m)
		{
			case 1:total+=0;
			break;
			case 2:total+=31;
			break;
			case 3:total+=60;
			break;
			case 4:total+=91;
			break;
			case 5:total+=121;
			break;
			case 6:total+=152;
			break;
			case 7:total+=182;
			break;
			case 8:total+=213;
			break;
			case 9:total+=244;
			break;
			case 10:total+=274;
			break;
			case 11:total+=305;
			break;
			case 12:total+=335;
			break;
		}
			total+=d;
			printf("%d\n",total);
		}
	}
	return 0;
} 
