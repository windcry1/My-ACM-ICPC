#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char s[1010];
	int res=0;
	while(~scanf("%s",s)){
		if(strcmp(s,"-1")==0) break;
		int len=strlen(s);
		if(len>=2&&s[len-2]=='2') res++;
	}
	printf("%d\n",res);
	return 0;
}
