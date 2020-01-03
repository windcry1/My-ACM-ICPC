#include<stdio.h>
int main()
{
	int N,NA,NB,a[100],b[100];
	int sumA=0,sumB=0,i;
	scanf("%d%d%d",&N,&NA,&NB);
		for( i=0;i<NA;i++){
		scanf("%d",&a[i]);
	}
	    for( i=0;i<NB;i++){
		scanf("%d",&b[i]);
	}
	for( i=0;i<N-NA;i++){
        a[i+NA]=a[i];}
	for( i=0;i<N-NB;i++){
        b[i+NB]=b[i];	}   
		for(i=0;i<N;i++){
			if((a[i]==5&&b[i]==0)||(a[i]==2&&b[i]==5)||(a[i]==0&&b[i]==2))
			sumA++;
			else if((b[i]==5&&a[i]==0)||(b[i]==2&&a[i]==5)||(b[i]==0&&a[i]==2))
			sumB++;
		}
		if(sumA>sumB)
		printf("A\n");
		else if(sumA<sumB)
		printf("B\n");
		else if(sumA==sumB)
		printf("draw\n");
		return 0;
		
}
