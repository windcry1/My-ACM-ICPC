#include<stdio.h>
int main(){
	int m,n,sn,a,an=0;
	scanf("%d %d",&m,&n);
	for(int k=1;k<=n;k++){
		sn=0;
	for(int i=0;i<k;i++){
		a=1;
		for(int j=1;j<=i;j++){
			a=a*10;
		}
		sn=sn+a*m;}
		an=an+sn;
	} 
	printf("%d\n",an);
	return 0;
}
