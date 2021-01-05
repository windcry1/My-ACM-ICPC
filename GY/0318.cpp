#include<stdio.h>
int main(){
	int a,c,t;
	while(~scanf("%d",&a)){
	int i=0,j=0,m=0,n=0;
	int b[100]={0},d[100]={0};
	if(a==0) printf("0\n0\n");
	else if(a!=0){
	t=a;
	while(a!=0){
		b[i]=a%2;
		i++;
		a=a/2;
	}
	for(int j=i-1;j>=0;j--){
			printf("%d",b[j]);
		}
	printf("\n");
	while(t!=0){
		d[m]=t%8;
		m++;
		t=t/8;}	
	for(int n=m-1;n>=0;n--){
		printf("%d",d[n]);
	}
	printf("\n");}}
	return 0;
}

