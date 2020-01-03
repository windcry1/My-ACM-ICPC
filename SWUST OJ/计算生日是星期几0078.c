#include<stdio.h>
int main()
{
	int y,m,d,total=0;
	scanf("%d%d%d",&y,&m,&d);
	if(y%4!=0||(y/100==0&&(y/400!=0)))
	{
		total+=(y-1)/4*1461+(y-(y-1)/4*4-1)*365-(y-1)/100+(y-1)/400;
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
	}
	else
	{
		total+=y/4*1461-366-(y-1)/100+(y-1)/400;
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
	}
	switch(total%7)
	{
		case 1:printf("Monday\n");
		break;
		case 2:printf("Tuesday\n");
		break;
		case 3:printf("Wendsday\n");
		break;
		case 4:printf("Thursday\n");
		break;
		case 5:printf("Friday\n");
		break;
		case 6:printf("Saturday\n");
		break;
		case 0:printf("Sunday\n");
		break;
	}
	return 0;
} 
