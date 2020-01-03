#include<stdio.h>
#include<string.h>
int main()
{
    int  i,j,str1,str2,k=0;     
    int  a1[1010],a2[1010],a3[1010];
    char s1[1010],s2[1010];
	while(scanf("%s%s",s1,s2)!=EOF)
	{    
    for(i=0; i<=1009; i++)
    {
        a1[i]=0;              
        a2[i]=0;
	}
	k=0;       
    str1=strlen(s1);        
    str2=strlen(s2);         
    j=0;
    for(i=str1-1; i>=0; i--)  
        a1[j++]=s1[i]-'0';
    j=0;
    for(i=str2-1; i>=0; i--)
        a2[j++]=s2[i]-'0';
    for(i=0; i<1010; i++)      
    {
        a1[i]+=a2[i];
        if(a1[i]>=10)
        {
           a1[i]-=10;
            a1[i+1]++;
        }
    }
    j=0;                     
    for(i=1009; i>=0; i--)    
	{  
        a3[j++]=a1[i];
	}
    for(i=0; i<1010; i++)
    {
        if(a3[i]!=0)   
		{
		k=1;           
		}
        if(k==1)   
		{
		printf("%d",a3[i]);
		}
    }
    if(k==0)  
	{
	printf("0");
	}
    printf("\n");
	}
    return 0;
}
