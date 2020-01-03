#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,k,l,t;
	char str[3][10];
	scanf("%d",&n);
	for(i=0;i<3*n;i+=3)
	{
		int max[12]={0},real[12]={0},heavy[12]={0},light[12]={0};
		for(k=0;k<3;k++)
		{
		for(j=0;j<3;j++)
		{
			scanf("%s",str[j]);
		}
			if(strcmp(str[2],"even")==0)
			{
				for(j=0;j<strlen(str[0]);j++)
				{
					real[str[0][j]-'A']=1;
				}
				for(j=0;j<strlen(str[1]);j++)
				{
					real[str[1][j]-'A']=1;
				}
			}
			if(strcmp(str[2],"up")==0)
			{
				for(j=0;j<strlen(str[0]);j++)
				{
					heavy[str[0][j]-65]++;
				}
				for(j=0;j<strlen(str[1]);j++)
				{
					light[str[1][j]-65]++;
				}
			}
			if(strcmp(str[2],"down")==0)
			{
				for(j=0;j<strlen(str[0]);j++)
				{
					light[str[0][j]-65]++;
				}
				for(j=0;j<strlen(str[1]);j++)
				{
					heavy[str[1][j]-65]++;
				}
			}
		}
		
		int maxx = 0;
		int pos = 0;
		for(j=0;j<12;j++)
		{
			if(real[j]==0)
			{
				if(heavy[j]-light[j]>0)
				{
					max[j]=heavy[j]-light[j];
				}
				if(heavy[j]-light[j]<0)
				{
					max[j]=light[j]-heavy[j];
				}
				if(max[j] > maxx)
				{
					maxx = max[j];
					pos = j;
				}
				/*for(k=0;k<12;k++)
				{
					if(real[k]==1)
					continue;
					if(maxi<max[k])
					maxi=max[k];
				} 
				for(k=0;k<12;k++)
				{
					if(real[k]==1)
					continue;
					if(maxi==max[k])
					break;
				}*/ 
			}
		}	
			printf("%c\n",pos+65);
				if(heavy[pos]-light[pos]>0)
				{
					printf("heavy\n");
				}
				if(heavy[pos]-light[pos]<0)
				{
					printf("light\n");
				}
			//for(j=0;j<12;j++)
			//printf("%d %d \n",heavy[j],light[j]); 
	} 
	return 0;
} 
