#include<stdio.h> 
int main()
{
	float result=0;
	int n;
	scanf("%d",&n);
	int a[10001];
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++)
	{
	   for(int j=i+1;j<n;j++)	
	   {
	   	   if(a[i]>a[j])
	   	    {
	   	        int t;
	   	    	t=a[i];
	   	    	a[i]=a[j];
	   	   	    a[j]=t;
		    }
		}	
	}
	for(int i=0,j=n;i<n,j>=0;i++,j--)
	{
	     result+=a[i]*j;
	}
	printf("%.2f\n",1.0*result/n);
	return 0;
}
