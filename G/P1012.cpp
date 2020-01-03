#include<stdio.h>
#include<string.h>
char s[21][10000],m[100][10000],a[100][10000],b[100][10000];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	scanf("%s",&s[i]);}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			strcpy(a[j],s[j]);strcpy(a[i],s[i]);strcpy(b[j],s[j]);strcpy(b[i],s[i]);
			if(strcmp(strcat(b[i],b[j]),strcat(a[j],a[i]))<0){//从第一个strcat S[i]开始改变 
				strcpy(m[i],s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],m[i]);
			}
		}
	}
	for(int i=0;i<n;i++){
	printf("%s",s[i]);}	
	return 0;
}

