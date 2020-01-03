#include<bits/stdc++.h>
using namespace std; 
struct date
{
	int day;
	int year;
	int month;
}date;
int main()
{
	int bookmonth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int bookmonth2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int day=0;
	while(cin>>date.year>>date.month>>date.day)
	{
		day=0;
		int flag=0;
	if((date.year%4==0&&date.year%100!=0)||date.year%400==0)
	{
		if(date.month>12||date.month<1||date.day>bookmonth2[date.month]||date.day<1)
			flag=1;
		for(int i=0;i<date.month;i++)
		{
			day+=bookmonth2[i];
		}
		day+=date.day;
	}
	else
	{
		if(date.month>12||date.month<1||date.day>bookmonth[date.month]||date.day<1)
			flag=1;
		for(int i=0;i<date.month;i++)
		{
			day+=bookmonth[i];
		}
		day+=date.day;
	}
	if(flag!=1)
		cout<<day<<endl;
	if(flag==1)
		cout<<"Input error!"<<endl;
	}
	return 0;
}
