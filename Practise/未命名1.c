#include<stdio.h>
#include<string.h>
#define MAXD 100
int main()
{
    char str1[201]={'0'},str2[201]={'0'};  
    int num1[201]={'0'},num2[201]={'0'};
    while(1)
    {
        int length1,length2,i,j=0;
        length1=strlen(str1);
        length2=strlen(str2);
		scanf("%s",str1);
        scanf("%s",str2);
        int max;
        if(length1>=length2)
        max=length1;
        else
        max=length2;
        for(i=length1-1; i>=0; i--)
        {
            num1[j++]=str1[i]-'0';
        }
        j=0;
        for(i=length2-1; i>=0; i--)
        {
            num2[j++]=str2[i]-'0';
        }
        for(i=0; i<max; i++)
        {
            num2[i]+=num1[i];
            if(num2[i]>=10)
            {
                num2[i]-=10;
                num2[i+1]+=1;
            }
        }
        if(num2[max]) printf("%d",num2[max]);
        for(i=max-1; i>=0; i--)
            printf("%d",num2[i]);
        printf("\n");
    }
    return 0;
}
