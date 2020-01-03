#include<stdio.h>
#include<string.h>
struct student{
	char name[100];
	int score;
}a[101],t;
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d",a[i].name ,&a[i].score);
	}
	for(i=0;i<n-1;i++)
	{
	 for(j=0;j<n-i-1;j++)
	 {
	 	if(a[j].score<a[j+1].score)
		 {
	    t=a[j+1];
	    a[j+1]=a[j];
	    a[j]=t; 
		}
	    else if (a[j].score==a[j+1].score)
		{
	    	if(strcmp (a[j].name,a[j+1].name)>0)
			{
	    		t=a[j];
	    		a[j]=a[j+1];
	    		a[j+1]=t;		
			}
		}
	 }
	}
	for(i=0;i<n;i++)
	{
		printf("%s %d\n",a[i].name,a[i].score);
	}
	return 0;
}
