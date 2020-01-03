#include <stdio.h>
int main() 
{ 
    int i, j, a,b;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%d ",j,i,i*j);
            if(i==b && j==a)
			break; 
        }
        printf("\n");
	}
    return 0;
}
