#include<stdio.h>
int main()
{
	int i,j,I,J; 
	char a[100][100];
	for(i=1;i<9;i++)
	{
		for(j=1;j<9;j++)
		{
			a[i][j]='0';
		}
	}
		scanf("%d %d",&I,&J);
	for(i=1;i<9;i++)
		a[I][i]='1'; 
	for(i=1;i<9;i++) 
		a[i][J]='1';
	for(i=I+1,j=J+1;i<9,j<9;i++,j++)
		a[i][j]='1';
	for(i=I-1,j=J-1;i>0,j>0;i--,j--)  
		a[i][j]='1';
	for(i=I+1,j=J-1;i<9,j>0;j--,i++)
		a[i][j]='1';
	for(i=I-1,j=J+1;j<9,i>0;i--,j++)
		a[i][j]='1';
			a[I][J]='Q';
	for(i=1;i<9;i++)
	{
	for(j=1;j<9;j++)
	{
	printf("%c ",a[i][j]);
	}
	printf("\n");
	}
	return 0;
}
