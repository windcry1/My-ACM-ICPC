#include<stdio.h>
int main()
{
	struct SB
{
	char num[100];
	char c[100];
	char name[100];
	double grade1,grade2,grade3,ave;
}hehe[500];
	int i,N,max=0,count;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s%s%s%lf%lf%lf",hehe[i].num,hehe[i].c,hehe[i].name,&hehe[i].grade1,&hehe[i].grade2,&hehe[i].grade3);
	}
	for(i=0;i<N;i++)
	{
		hehe[i].ave=(hehe[i].grade1+hehe[i].grade2+hehe[i].grade3)/3.0;
	}
	for(i=0;i<N;i++)
	{
		printf("%s %.1f\n",hehe[i].name,hehe[i].ave);
	}
	for(i=0;i<N;i++)
	{
		if(max<hehe[i].ave)
		{
			max=hehe[i].ave;
			count=i;
		}
	}
	printf("%s %s %s %.1lf %.1lf %.1lf %.1lf\n",hehe[count].num,hehe[count].c,hehe[count].name,hehe[count].grade1,hehe[count].grade2,hehe[count].grade3,hehe[count].ave);
	return 0;
} 
