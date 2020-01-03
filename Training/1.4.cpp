#include<bits/stdc++.h>
using namespace std;
struct node
{
	int grade,numx;
	char name[10],num[8];
}X[100001];

bool compare1(node X,node Y)
{
	if(X.numx<Y.numx)
		return true;
	else
		return false;
}

bool compare2(node X,node Y)
{
	if((strcmp(X.name,Y.name)<0)||(strcmp(X.name,Y.name)==0&&X.numx<Y.numx))
		return true;
	else
		return false;
}

bool compare3(node X,node Y)
{
	if((X.grade<Y.grade)||(X.grade==Y.grade&&X.numx<Y.numx))
		return true;
	else
		return false;
}

int main()
{
    int n,c,time=1;
    while(scanf("%d%d",&n,&c)!=EOF)
    {
    	if(n==0&&c==0)
    		return 0; 
    for(int i=0;i<n;i++)
    {
    	scanf("%s%s%d",X[i].num,X[i].name,&X[i].grade);
    	X[i].numx=atoi(X[i].num);
	}
	if(c==1)
		sort(X,X+n,compare1);
	if(c==2)
		sort(X,X+n,compare2);
	if(c==3)
		sort(X,X+n,compare3);
	printf("Case %d:\n",time++);
	for(int i=0;i<n;i++)
		cout<<X[i].num<<' '<<X[i].name<<' '<<X[i].grade<<'\n';
	}
}
