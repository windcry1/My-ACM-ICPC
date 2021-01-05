#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n>0){
		n--;
		int c;
		scanf("%d",&c);
		int s[10001],a[10001]={0},max=0,t=0;
		for(int i=0;i<c;i++){
			scanf("%d",&s[i]);
		}
		for(int i=0;i<c;i++){
			a[s[i]]++;
		}
		for(int i=0;i<10000;i++){
			if((a[i]+a[i+1])>max){
				t=i;
				max=a[i]+a[i+1];
			}
		}
		printf("%d\n",a[t]+a[t+1]);
	}
	return 0;
}
