#include<stdio.h>
int main()
{
    int M,i,j,I;
    char N[1001];
    for(i=0;i<=1000;i++)
    {
    	N[i]='0';
	}
    scanf("%d%s",&M,N);
    for(i=1000;i>=0;i--)
    {
    	if(N[i]!='0')
    	{
    		for(j=0;j<i;j++)
    		{
    			if(N[j]=='0')
    			{
    				continue;
				}
				printf("%c*%d^%d",N[j],M,i-j-1);
        		for(I=j+1;I<=i-1;I++)
        		{
        			if(N[I]=='0')
        			{
        				continue;
					}
					else
					{
						printf("+");
						break;
					}
				}
			}
			break;
		}
    }
    return 0;
}
