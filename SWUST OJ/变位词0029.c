#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,t;
	char str1[100],str2[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int a[26]={0},num=0;
		scanf("%s%s",str1,str2);
		for(j=0;j<strlen(str1);j++)        
		{         
			int t=str1[j]-'a';         
			a[t]++;  
		}  
		for(j=0;j<strlen(str2);j++)        
		{         
			int t=str2[j]-'a';         
			a[t]--;        
		}
		for(j=0;j<26;j++)        
		{         
			if(a[j]!=0)          
			num++;  
		}        
		if(num==0)            
			printf("Yes\n");        
		else            
			printf("No\n");    
	}   
	return 0;
}
