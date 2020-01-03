#include<stdio.h>
#include<string.h>
int main()
{
	char str1[1001],str2[1001];
	int i,len,num,flag=0;
	while(scanf("%s",str1)!=EOF)
	{
		flag=0;
		for(i=0;i<len;i++)
			if(str1[i]=='X')
			flag=1;
		if(flag==1)
			break;
		scanf("%s",str2); 
		num=0;
		len=strlen(str1);
		for(i=0;i<len;i++)
		{
			if(str1[i]!=str2[i])
				num++;
		}
		printf("Hamming distance is %d.\n",num);
	}
	return 0;
}
