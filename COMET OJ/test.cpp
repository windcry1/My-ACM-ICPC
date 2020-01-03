#include<stdio.h>
int main(){char d;
	int a,b,c,m,n;
	while(~scanf("%d%c%d%d",&a,&d,&b,&c)){
	m=(c%60+b)%60;
	n=((c/60)+a)%24;
	printf("%02d:%02d\n",n,m); 
}
//	if(n<10&&m<10) printf("0%d:0%d",n,m);
//	else if(n<10&&m>=10) printf("0%d:%d",n,m);
//	else if(m<10&&n>=10) printf("%d:0%d",n,m);
//	else if(n>=10&&m>=10) printf("%d:%d",n,m);
}

