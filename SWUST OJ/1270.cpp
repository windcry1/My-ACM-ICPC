#include<stdio.h>
int main(){
	int n,i,j,t;
	int a[1010];
	scanf("%d",&n);
	for(i=1;i<=n;i++) scanf("%d",a+i);
	for(i=1;i<=n;i++) for(j=i+1;j<=n;j++) if(a[i]>a[j]){
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	int cnt=1,res=1,tmp=a[1];
	for(i=2;i<=n;i++){
		if(a[i]==a[i-1]) ++cnt;
		else cnt=1;
		if(cnt>res){
			tmp=a[i];
			res=cnt;
		}
	}
	printf("%d",tmp);
	return 0;
}
