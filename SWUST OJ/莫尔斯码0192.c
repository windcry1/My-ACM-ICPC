#include<stdio.h>
#include<string.h> 
int main()
{
	char str[10000],ch[26][26],c,flag=0;
	strcpy(ch[0],".-");strcpy(ch[1],"-...");strcpy(ch[2],"-.-.");
	strcpy(ch[3],"-..");strcpy(ch[4],".");strcpy(ch[5],"..-.");
	strcpy(ch[6],"--.");strcpy(ch[7],"....");strcpy(ch[8],"..");strcpy(ch[9],".---");
	strcpy(ch[10],"-.-");strcpy(ch[11],".-..");strcpy(ch[12],"--");strcpy(ch[13],"-.");
	strcpy(ch[14],"---");strcpy(ch[15],".--.");strcpy(ch[16],"--.-");strcpy(ch[17],".-.");strcpy(ch[18],"...");
	strcpy(ch[19],"-");strcpy(ch[20],"..-");strcpy(ch[21],"...-");strcpy(ch[22],".--");strcpy(ch[23],"-..-");
	strcpy(ch[24],"-.--");strcpy(ch[25],"--..");
	while((c=getchar())!='\n')
	{
		if(c==' ')
		{
			printf("***");
			flag=0;
		}
		if(c>='A'&&c<='Z'&&flag!=0)
		{
			printf("*");
		}
		if(c>='A'&&c<='Z')
		{
			printf("%s",ch[c-'A']);
			flag=1;
		}		
	}
	printf("\n");
	return 0;
} 
