#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,n,len,j,num,count=0;
	char origin[1501],a[1501],name[1501];
	scanf("%d",&n);
	scanf("%s",origin);
	while(n--)
	{
		i=0;
		getchar();
		memset(name,0,sizeof(name));
		memset(a,0,sizeof(a));
		while((name[i++]=getchar())!=':');
		scanf("%s",a);
		name[i-1]='\0';
		name[i]=0;
		len=strlen(origin);
		num=0;
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]==origin[0])
			{
				num=0;
				for(j=i;j<i+len;j++)
				{
					if(origin[j-i]==a[j])
						num++;
				}
				if(num==len)
					break;
			} 
		}
		if(num==len)
		{
			printf("%s\n",name);
			count++;
		}
	}
	if(count==0)
		printf("none\n");
	return 0;
}
