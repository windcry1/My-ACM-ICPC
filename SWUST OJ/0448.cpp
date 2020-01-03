#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	char s[10010],t[10010];
	scanf("%s",s);
	getchar();
	fgets(t,10010,stdin);
	int lens=strlen(s),lent=strlen(t);
	for(int i=0;i<lent;i++){
		int flag=0;
		for(int j=0;j<lens;j++){
			if(s[j]!=t[i+j])
				flag=1;
		}
		if(!flag){
			printf("%d\n",i+1);
			return 0;
		}
	}
	printf("-1\n");
	return 0;
}
