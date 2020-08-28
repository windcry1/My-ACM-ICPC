#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
char a[1000010];
int main(){
	int n,k,i,j,now=0;
	char s[300];
	scanf("%d%d",&n,&k);
	getchar();
	for(i=0;i<n;i++){
		fgets(s,300,stdin);
		int cnt=0;
		while(s[cnt]!='\0'){
			a[now]=s[cnt];
			now++,cnt++;
		}
	}
	int len=strlen(a);
	for(i=0;i<len;i++){
		if(a[i]=='-'){
			int temp=0;
			int cnt=i+1;
			while(cnt<len){
				if(a[cnt]=='\n') {
					cnt++;
					continue;
				}
				else if(isdigit(a[cnt]))
					temp=temp*10+a[cnt]-'0';
				else break;
				++cnt;
			}
			if(a[cnt]=='-'){
				if(temp==k){
					k++;
					for(j=i;j<=cnt;j++)
						if(a[j]!='\n') a[j]=-1;
				}
			}
		} 
	}
	for(i=0;i<len;i++){
		if(a[i]!=-1){
			printf("%c",a[i]);
		}
	}
	putchar('\n');
	return 0;
}
