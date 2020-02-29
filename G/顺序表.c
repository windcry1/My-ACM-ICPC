#include<stdio.h>
#define maxn 100010
typedef struct seqlist{
	int a[maxn],length;
}Seqlist;
void initlist(Seqlist *x){
	x->length=0;
}
void insert(Seqlist *x,int t){
	x->a[x->length]=t;
	x->length++;
}
Seqlist Plus(Seqlist *a,Seqlist *b){
	Seqlist res;
	initlist(&res);
	for(int i=0;i<a->length;i++)
		insert(&res,a->a[i]+b->a[i]);
	return res;
}
int main(){
	Seqlist a,b;
	initlist(&a);
	initlist(&b);
	printf("Please input the highest degree of the polynomial :\n");
	int n;scanf("%d",&n);
	printf("This is the first polynomial :\n");
	for(int i=0;i<=n;i++){
		printf("Please input the coefficient of x^%d :",n-i);
		int t;scanf("%d",&t);insert(&a,t);
	}
	printf("This is the second polynomial :\n");
	for(int i=0;i<=n;i++){
		printf("Please input the coefficient of x^%d :",n-i);
		int t;scanf("%d",&t);insert(&b,t);
	}
	printf("This is the sum of two polynomials :\n");
	Seqlist res=Plus(&a,&b);
	for(int i=0;i<res.length;i++){
		printf("%dx^%d",res.a[i],res.length-1-i);
		putchar(i==res.length-1?'\n':'+');
	}
	return 0;
}


