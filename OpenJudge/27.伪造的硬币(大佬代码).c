#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	char s1[10],s2[10],s3[10],s4[10],s5[10],s6[10],s7[10],s8[10],s9[10];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s%s%s",s1,s2,s3);
		scanf("%s%s%s",s4,s5,s6);
		scanf("%s%s%s",s7,s8,s9);
		for(int i='A';i<='L';i++)
		{
			int l,t1=0,t2=0;
			l=strlen(s1);
			for(int k=0;k<l;k++)
			{
				if(s1[k]==i)
				{
					t1-=1;
				}
				if(s2[k]==i)
				{
					t2-=1;
				}
			}
			if(strcmp("even",s3)==0)
			{
				if(t1!=t2)
				{
					continue;
				}
			}
			else if(strcmp("up",s3)==0)
			{
				if(t1<=t2)
				{
					continue;
				}
			}
			else if(strcmp("down",s3)==0)
			{
				if(t1>=t2)
				{
					continue;
				}
			}
			t1=t2=0;
			l=strlen(s4);
			for(int k=0;k<l;k++)
			{
				if(s4[k]==i)
				{
					t1-=1;
				}
				if(s5[k]==i)
				{
					t2-=1;
				}
			}
			if(strcmp("even",s6)==0)
			{
				if(t1!=t2)
				{
					continue;
				}
			}
			else if(strcmp("up",s6)==0)
			{
				if(t1<=t2)
				{
					continue;
				}
			}
			else if(strcmp("down",s6)==0)
			{
				if(t1>=t2)
				{
					continue;
				}
			}
			t1=t2=0;
			l=strlen(s7);
			for(int k=0;k<l;k++)
			{
				if(s7[k]==i)
				{
					t1-=1;
				}
				if(s8[k]==i)
				{
					t2-=1;
				}
			}
			if(strcmp("even",s9)==0)
			{
				if(t1!=t2)
				{
					continue;
				}
			}
			else if(strcmp("up",s9)==0)
			{
				if(t1<=t2)
				{
					continue;
				}
			}
			else if(strcmp("down",s9)==0)
			{
				if(t1>=t2)
				{
					continue;
				}
			}	
			printf("%c\n",i);
			printf("light\n");
		}
		for(int i='A';i<='L';i++)
		{
			int l,t1=0,t2=0;
			l=strlen(s1);
			for(int k=0;k<l;k++)
			{
				if(s1[k]==i)
				{
					t1+=1;
				}
				if(s2[k]==i)
				{
					t2+=1;
				}
			}
			if(strcmp("even",s3)==0)
			{
				if(t1!=t2)
				{
					continue;
				}
			}
			else if(strcmp("up",s3)==0)
			{
				if(t1<=t2)
				{
					continue;
				}
			}
			else if(strcmp("down",s3)==0)
			{
				if(t1>=t2)
				{
					continue;
				}
			}
			t1=t2=0;
			l=strlen(s4);
			for(int k=0;k<l;k++)
			{
				if(s4[k]==i)
				{
					t1+=1;
				}
				if(s5[k]==i)
				{
					t2+=1;
				}
			}
			if(strcmp("even",s6)==0)
			{
				if(t1!=t2)
				{
					continue;
				}
			}
			else if(strcmp("up",s6)==0)
			{
				if(t1<=t2)
				{
					continue;
				}
			}
			else if(strcmp("down",s6)==0)
			{
				if(t1>=t2)
				{
					continue;
				}
			}
			t1=t2=0;
			l=strlen(s7);
			for(int k=0;k<l;k++)
			{
				if(s7[k]==i)
				{
					t1+=1;
				}
				if(s8[k]==i)
				{
					t2+=1;
				}
			}
			if(strcmp("even",s9)==0)
			{
				if(t1!=t2)
				{
					continue;
				}
			}
			else if(strcmp("up",s9)==0)
			{
				if(t1<=t2)
				{
					continue;
				}
			}
			else if(strcmp("down",s9)==0)
			{
				if(t1>=t2)
				{
					continue;
				}
			}	
			printf("%c\n",i);
			printf("heavy\n");
		}
	}
	return 0;
}
