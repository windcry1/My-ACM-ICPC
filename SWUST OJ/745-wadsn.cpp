#include<stdio.h>
#include<math.h>
int b[200000],e[200000];
int main(){
	int sum1=0,sum2=0,i,j,p=0,x,y;
	while(1){
		scanf("%d %d",&x,&y);
		if(x==0&&y==0) break;
		b[p++]=x;
		e[p-1]=y;
		sum1+=y-x;
	}
	sum2=sum1;
	while(1){
		scanf("%d %d",&x,&y);
		if(x==0&&y==0) break;
		for(i=0;i<p;i++){
			if(x>=b[i]&&x<e[i]&&y<=e[i])  sum2-=y-x;
			else if(x>=b[i]&&x<e[i]&&y>e[i]) sum2-=e[i]-x;
			else {}
		}
	}
	printf("%d\n%d",sum1,sum2);
	return 0;
}

