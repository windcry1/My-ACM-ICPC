#include<stdio.h>
#include<math.h>
int  main()
{
    int t,i,n,j,min,a[65];
    a[1]=1;
    a[2]=3;
    for(i=3;i<=41;i++)
    {
        min=pow(2,31)-1;
        for(j=1;j<i;j++)
        { 
            if(2*a[j]+pow(2,i-j)-1<min)
                min=2*a[j]+pow(2,i-j)-1;
            a[i]=min;
        } 
    }
    scanf("%d",&t);
    while(t--)
    { 
    	scanf("%d",&n);
        printf("%d\n",a[n]);
    }
        return 0;
}

