#include<stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int x1,x2,y1,y2,m=0,n=0;
	while(c>0){
		c--;
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		if(x1+x2==y1&&x1+x2!=y2) b=b-d;
		else if(x1+x2!=y1&&x1+x2==y2) a=a-d;
		if(a<=0){m=1;break;}
		else if(b<=0){n=1;break;}
		
	}
	if(m==1) {
			printf("NOC is legendary!\n");
			return 0;
		}
	else if(n==1) {
			printf("Angora is legendary!\n");
			return 0;
		}
		
	
		else {
			printf("Draw!\n");
			return 0;
		}
	return 0;
}
