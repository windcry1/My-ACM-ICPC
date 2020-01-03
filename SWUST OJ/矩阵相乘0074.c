#include"stdio.h"
#include"string.h"
int main() 
{
	int n,i;
	char a[81];
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]<='z'&&a[i]>='a')
		a[i]-=32;
		else if(a[i]>='A'&&a[i]<='Z')
		a[i]+=32;
		
	}printf("%s",a);
	return 0;
}
