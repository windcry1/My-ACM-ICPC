#include<stdio.h>
#include<string.h>
int main()
{
    	char s1[1001]={'0'},s2[1001]={'0'};    
    	int a[1001]={0},b[1001]={0},l1,l2,i,j=0,max;
        scanf("%s",s1);
        scanf("%s",s2);
        l1=strlen(s1);
        l2=strlen(s2);
        if(l1>l2)
        {
        max=l1;
   		}
        else
        {
        max=l2;
    	}
        for(i=l1-1; i>=0; i--)
        {
            a[j++]=s1[i]-'0';
        }
        j=0;
        for(i=l2-1; i>=0; i--)
        {
            b[j++]=s2[i]-'0';
        }
        for(i=0; i<max; i++)
        {
            b[i]+=a[i];
            if(b[i]>=10)
            {
                b[i]-=10;
                b[i+1]+=1;
            }
        }
        for(i=max; i>=0; i--)
        {
        	if(b[i]!=0)
            break;
        }
        for(j=i;j>=0;j--)
        {
        printf("%d",b[j]);
   		}
        printf("\n");
    return 0;
}
