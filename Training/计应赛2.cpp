#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,res=0;
	for(i=n;i<=m;i++)
		if(i%2==0&&i%3==0&&i%7!=0) res++;
	printf("%d\n",res);
	return 0;
}
