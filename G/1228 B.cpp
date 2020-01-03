#include<stdio.h>
/*
4 4
2 0 3 1
1 3 0 3

0 
*/ 
int a[1001][1001],m[1001],n[1001];
int main(){
	long long h,w,res=0,sum=1;
	int f=0;
	scanf("%lld %lld",&h,&w);
	for(int i=0;i<h;i++){
		scanf("%lld",&m[i]);
	}
	for(int i=0;i<w;i++){
		scanf("%lld",&n[i]);
	}
	for(int i=0;i<h;i++){
		if(m[i]==0) a[i][0]=2;
		else if(m[i]>0) {
		    for(int j=0;j<m[i];j++){
		    	a[i][j]=1;
			}
			a[i][m[i]]=2;
		}
	}
	for(int i=0;i<w;i++){
		if(n[i]==0) {
			if(a[0][i]==1) f=1;
			a[0][i]=2;
		}
		else if(n[i]>0) {
		    for(int j=0;j<n[i];j++){
		    	if(a[j][i]==2) f=1;
		    	a[j][i]=1;
			}
			if(a[n[i]][i]==1) f=1;
			a[n[i]][i]=2;
		}
	}
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(a[i][j]==0) res++;
		}
	}
	if(f==1){
		printf("0\n");
		return 0;
	} 
	for(int i=1;i<=res;i++){
		sum=(sum*2)%1000000007;
	}
	printf("%lld",sum);
	return 0;
}

