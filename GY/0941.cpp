#include<stdio.h>
#include<stdlib.h>
#define maxn 1010
typedef struct Seqlist{
	int data[maxn];
	int length;
}seqlist;
void initlist(seqlist *l){
	l->length=0;
}
void insert(seqlist *l,int data){
	l->data[l->length]=data;
	l->length++;
}
void createlist(seqlist *l){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int t;scanf("%d",&t);
		insert(l,t);
	}
}
void mergelist(seqlist *l1,seqlist *l2,seqlist *res){
	initlist(res);
	int i=0,j=0;
	while(i<l1->length && j<l2->length){
		if(l1->data[i]<l2->data[j]) insert(res,l1->data[i++]);
		else insert(res,l2->data[j++]);
	}
	while(i<l1->length) insert(res,l1->data[i++]);
	while(j<l2->length) insert(res,l2->data[j++]);
}
void print(seqlist *l){
	for(int i=0;i<l->length;i++){
		printf("%d ",l->data[i]);
	}
}
int main(){
	seqlist *l1=(seqlist *)malloc(sizeof (seqlist));
	initlist(l1);
	createlist(l1);
	seqlist *l2=(seqlist *)malloc(sizeof (seqlist));
	initlist(l2);
	createlist(l2);
	seqlist *res=(seqlist *)malloc(sizeof (seqlist));
	mergelist(l1,l2,res);
	print(res);
	return 0;
}
