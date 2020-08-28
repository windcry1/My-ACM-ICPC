#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
struct node{
	double total;
	int num;
}x;
int main(){
	int n,i;scanf("%d",&n);
	double total=-1;
	int num=-1,a,b;
	for(i=1;i<=n;i++) {
		scanf("%lf%d",&x.total,&x.num);
		if(total<x.total){
			a=i;
			total=x.total;
		}
		if(num<x.total){
			b=i;
			num=x.num;
		}
	}
	printf("%d %d\n",a,b);
	return 0;
}
