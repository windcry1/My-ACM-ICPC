#include<stdio.h>
int a[30][30];
int main(){
	int n;
	while(~scanf("%d",&n)){
		if(n==0) break;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++){
				if(j==1||j==i) a[i][j]=1;
				else a[i][j]=a[i-1][j]+a[i-1][j-1];
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++)
				printf("%d%c",a[i][j],j==i?'\n':' ');
		}
	}
}
