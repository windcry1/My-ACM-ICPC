#include<stdio.h>
#include<string.h>
int main(){
	int n;
	char s[1010];
	int a[1010];
	scanf("%d%s",&n,s);
	int len=strlen(s);
	for(int i=0;i<len;i++){
		a[i]=s[i];
	}
	for(int i=0;i<len;i++) {
		a[i]=a[i]+n;
		while(a[i]>'z'){
			a[i]-=26;
		}
	}
	for(int i=0;i<len;i++){
		printf("%c",a[i]);
	}
	printf("\n");
	return 0;
}

