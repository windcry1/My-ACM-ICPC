#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int n,i,j,t;scanf("%d",&n);
	int res=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&t);
			if((i==j||i+j==n-1)&&t!=0) ++res;
		}
	}
	printf("%d\n",res);
	return 0;
} 
