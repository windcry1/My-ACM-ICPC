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
void insertlist(seqlist *l,seqlist *res){
	initlist(res);
	int item,data;
	scanf("%d%d",&item,&data);
	int i=0;
	while(i<l->length && l->data[i]!=item) insert(res,l->data[i++]);
	insert(res,data);
	while(i<l->length) insert(res,l->data[i++]);
}
void print(seqlist *l){
	for(int i=0;i<l->length;i++)
		printf("%d ",l->data[i]);
}
int main(){
	int n;
	seqlist *l=(seqlist *)malloc(sizeof (seqlist));
	initlist(l);
	createlist(l);
	seqlist *res=(seqlist *)malloc(sizeof (seqlist));
	insertlist(l,res);
	print(res);
	return 0;
}
