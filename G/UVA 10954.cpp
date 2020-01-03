#include<stdio.h>
int main(){
	int n;
	while(~scanf("%d",&n)){
	int a[5100]={0},res=0,sum=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]>a[j]){
				int t=a[i];
				a[i]=a[j];
				a[j]=t; 
			}
		}
	}
	//1 4 4 4 
	//1 and 4 cost = 5
	// 4 4 5
	//4 and 4 cost = 8
	//5 8
	//5 and 8 cost = 13 
	//13
	//total = 26 
	for(int i=1;i<=n;i++){
		res=0;
		for(int j=1;j<=i;j++){
			res=res+a[j];
		}
		sum=sum+res;
	}
	if(n==0) break;
	else{
		printf("%d\n",sum-a[1]);}
    }
    return 0;
} 
