#include<stdio.h>
#include<string.h>
int main()
{
	char str1[503],str2[503];
	double a[26],n,sum;
	int len,i;
	scanf("%lf",&n);
	scanf("%s%s",str1,str2);
	len=strlen(str1);
	for(i=0;i<len;i++)
	{
		if(str1[i]==str2[i])
		sum++;
	}
	if(n<len/sum)
	printf("yes\n");
	else
	printf("no\n");
	return 0;
}
