#include<stdio.h>
#include<string.h>
int main()
{
	char str[100000],str0[100];
	int i=0;
	strcpy(str0,"Welcome to the Software Engineering 0604 Program Compitition!\n");
	while((str[i++]=getchar())!='\n');
	if(strcmp(str,str0)==0)
	{
		printf("Welcome to the Software Engineering 0604 Program Compitition!\n");
	}
	else printf("Wrong Input!\n");
	return 0;
}
