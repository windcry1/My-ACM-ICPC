#include <stdio.h>
int max(int month,int year);
struct Date{
	int year;
	int month;
	int date;
}now; 
int main()
{
	scanf("%d %d %d",&now.year,&now.month,&now.date);
		int num=0;
		if(now.month>12||now.month<1||now.date>max(now.month,now.year)||now.date<1)
	   		printf("Input error!\n");
		else{
			for(int i=0;i<now.month;i++)
				num+=max(i,now.year);
			num+=now.date;
		printf("%d\n",num);
	} 
	return 0;
}

int max(int month,int year)
{
	int n,m,t,a;
	int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	
	n=year%4;m=year%100;t=year%400;
	if(n==0&&m!=0||t==0)
		day[2]+=1;
	a=day[month];
	return a;
}

