#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,R,C,len1,len2;
	char a[21][21]={'0'},s1[200]={0},s2[1000]={0},t[30][10]={"00001", "00010", "00011", "00100", "00101", "00110", "00111",
	 "01000", "01001", "01010","01011", "01100", "01101", "01110", "01111", "10000", 
	 "10001", "10010", "10011", "10100","10101", "10110", "10111", "11000", "11001", "11010"};
	scanf("%d %d",&C,&R);//t从0开始,矩阵从1 1开始 
	getchar();
	gets(s1);
	len1=strlen(s1);
	for(i=0;i<len;i++)
	{
		if(s1[i]==' ')
			strcat(s2,"00000");
		else if(s1[i]<='Z'&&s1[i]>='A')
			strcat(s2,t[s1[i]-'A']);
	}
	len2=strlen(s2);
	for(i=len2;i<1000;i++)
		s2[i]='0';
	int temp=0,left=-1,right=R-1,top=0,bottom=C-1;
	while (left<=right && top<=bottom)
	{
		if (top<=bottom)
		{
			for (j=++left; j<=right; j++)
				a[top][j] = s2[temp++];
		}
		if (left<=right)
		{
			for (i=++top; i<=bottom; i++)
				a[i][right] = s2[temp++];
		}
		if (top<=bottom)
		{
			for (j=--right; j>=left; j--)
				a[bottom][j] = s2[temp++];
		}
		if (left<=right)
		{
			for (i=--bottom; i>=top; i--)
				a[i][left] = s2[temp++];
		}
	}

	for (i=0;i<C;i++)
	{
		for(j=0;j<R;j++)
		{
		printf("%c",a[i][j]);
		}
	}
	//for(i=0;i<temp;i++)
	//printf("%c\n",s2[i]);
	//printf("%d",len);
	return 0;
} 
