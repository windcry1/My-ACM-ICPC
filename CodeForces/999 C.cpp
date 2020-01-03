#include <stdio.h>
struct node{
	int a[400010];
	int length=0;
}x[27];
char s[400010];
int flag[400010];
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	scanf("%s",s);
	for(int i=0;i<n;i++){
		int t=s[i]-'a';
		x[t].a[x[t].length]=i;
		x[t].length++;
	}
	int f=0,num=0;
	for(int i=0;i<26;i++){
		for(int j=0;j<x[i].length;j++){
			flag[x[i].a[j]]=1;
			num++;
			if(num>=k){
				f=1;
			}
			if(f==1){
				break;
			}
		}
		if(f==1){
			break;
		}
	}
	for(int i=0;i<n;i++){
		if(flag[i]==0){
			printf("%c",s[i]);
		}
	}
	return 0;
}

