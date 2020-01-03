#include<stdio.h>
#include<string.h>
int main()
{
	int m=0,n=0,max=0,t;
	char b[100][100]={0};
	char a[100];
	scanf("%s",a);
	for(int i=0;i<n+1;i++)
	{
		if((a[i]>='A'&&a[i]<='Z' )||(a[i]>='a'&&a[i]<='z'))
		{
		   	b[m][n++]=a[i];
		}
		if((a[i-1]>='A'&&a[i-1]<='Z' )||(a[i-1]>='a'&&a[i-1]<='z')&&(a[i]==' '||a[i]=='.'||a[i]=='\0'))
		{
			b[m][n++]='\0';
			if(max<n)
			{
				t=m;
				max=n;
			}
			m++;
			n=0;
		}
	}
	printf("%s",a[t]);
	return 0;
}

