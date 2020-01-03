#include<stdio.h>
#include<string.h>
#include<math.h>
void sort(int *a, int n) 
{
    int c,t,temp,max,i,j;
    for(i=0;i<n;i++)
    {
    	max=0;
    	for(j=i;j<n;j++)
    	{
    		if(max<a[j])
    		{
    			max=a[j];
    			t=j;
    		}
		}
		temp=a[i];
		a[i]=a[t];
		a[t]=temp;
	}
}
int main()
{
	int n,a[101],t,i,num=0,s;
	scanf("%d",&n);
	memset(a,0,sizeof(a));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&t);
	sort(a,n);
	for(i=0;i<n;i++)
    {  
         
        printf("%d",a[i]);
        if((i+1)%10==0||(i+1)==n)
        {   
            printf("\n");
             
        }
        else
        {
            printf(" ");
        }   
    }   
	for(i=0;i<n;i++)
	{
		if(a[i]==t)
		{
			break;
		}
	}
	if(num!=0)
		printf("\n");
	if(i==n)
		printf("no this score!\n");
	else
		printf("%d\n",i+1);
	return 0;
}
