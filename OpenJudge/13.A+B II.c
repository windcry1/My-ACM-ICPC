#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  	char    str1[22],str2[22];
   	int     i,a,b,j,T,I;
  	char    tmp;
  	scanf("%d",&T);
  	for(I=1;I<=T;I++)
{
  	scanf("%s %s",str1,str2);
	{
        i = strlen(str1);
        i--;
        for (j = 0; j < i; j++, i--) 
		{
            tmp = str1[i];
            str1[i] = str1[j];
            str1[j] = tmp;
        }
        i = strlen(str2);
        i--;
        for (j = 0; j < i; j++, i--) 
		{
            tmp = str2[i];
            str2[i] = str2[j];
            str2[j] = tmp;
        }
        a=atoi(str1);b=atoi(str2);
        printf("%d\n", a+b);
    }
}
    return 0;
}
