#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
struct node{
	int num;
	int key;
}a[10010];
int prime(int n){
	int res=0,i;
	for(i=1;i<=sqrt(n);i++){
		if(n%i==0){
			if(n!=i*i) res++;
			res++;
		}
	}
	return res;
}
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i].num);
		a[i].key=prime(a[i].num);
	}
	for(int i=0;i<n;i++) printf("%d ",a[i].key);printf("\n");
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i].key<a[j].key||a[i].key==a[j].key&&a[i].num<a[j].num){
				node t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d%c",a[i],i==n-1?'\n':' ');
	}
	return 0;
} 
