#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct v{
	int a[1010];
	int length;
}vector;
int min(int a,int b){
	return a<b?a:b;
}
int max(int a,int b){
	return a>b?a:b;
}
int find(int n){
	int res=11;
	while(n){
		res=min(n%10,res);
		n/=10;
	}
	return res==11?0:res;
}
int a[1010];
int main(){
	int n,i;
	vector err;
	err.length=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int t;scanf("%d",&t);
		a[i]=t;
		int num=find(t);
		t=t/100*100+t%10+num*10;
		if(t==a[i]) err.a[err.length++]=t;
		a[i]=t;
	}
	if(err.length==0){
		printf("Done");
		for(i=0;i<n;i++) printf(" %d",a[i]);
		printf("\n");
	}
	else {
		printf("Error");
		for(i=0;i<err.length;i++){
			printf(" %d",err.a[i]);
		}
		printf("\n");
	}
	return 0;
} 
