#include<stdio.h>
#include<string.h>
int main()
{
	int m=0,n=0,max=0,t;
	char a[100];
	gets(a);
	char b[100][100];
	int j=0,num=0;
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]==' '||a[i]=='\n')
		{
			for(int k=0;k<i-num;k++)
				b[j][k]=a[num+k];
			b[j][i]='\0';
			num=i+1;
			j++;
		}
	}
	for(int k=0;k<strlen(a)-num;k++)
		b[j][k]=a[num+k];
	b[j][strlen(a)-num]='\0';
	j++;
	for(int i=0;i<j;i++)
	{
		if(max<strlen(b[i]))
		{ 
			max=strlen(b[i]);
			t=i;
		} 
	}
	printf("%s\n",b[t]);
	return 0;
}
