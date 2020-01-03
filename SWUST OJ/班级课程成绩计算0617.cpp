//Author:LanceYu
#include<bits/stdc++.h>
using namespace std;
struct node
{
	char num[101];
	double scoreenglish;
	double scoremath;
	double scoreC;
	double scoremusic;
	double scoreart;
	double average;
}X[1001];
int main()
{
	int n;
	double score[5]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s%lf%lf%lf%lf%lf",X[i].num,&X[i].scoreenglish,&X[i].scoremath,&X[i].scoreC,&X[i].scoremusic,&X[i].scoreart);
		X[i].average=(X[i].scoreenglish+X[i].scoremath+X[i].scoremusic+X[i].scoreart+X[i].scoreC)/5.0;
	}
	for(int i=0;i<n;i++)
	{
		printf("%s %g %g %g %g %g %.1lf\n",X[i].num,X[i].scoreenglish,X[i].scoremath,X[i].scoreC,X[i].scoremusic,X[i].scoreart,X[i].average);
	}
	for(int i=0;i<n;i++)
	{
		score[0]+=X[i].scoreenglish;
	}
	for(int i=0;i<n;i++)
	{
		score[1]+=X[i].scoremath;
	}
	for(int i=0;i<n;i++)
	{
		score[2]+=X[i].scoreC;
	}
	for(int i=0;i<n;i++)
	{
		score[3]+=X[i].scoremusic;
	}
	for(int i=0;i<n;i++)
	{
		score[4]+=X[i].scoreart;
	}
	for(int i=0;i<5;i++)
	{
		if(i<4)
			printf("%.1lf ",score[i]/n);
		else
			printf("%.1lf\n",score[i]/n); 
	}
	return 0;
}

