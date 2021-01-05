#include<stdio.h>
#include<stdlib.h>
#define maxn 1010
typedef struct Seqlist{
	char data[maxn];
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
	scanf("%d",&n);getchar();
	for(int i=0;i<n;i++){
		char t=getchar();
		insert(l,t);
	}
}
void reverselist(seqlist *l,seqlist *res){
	initlist(res);
	int i=l->length-1;
	while(i>=0) insert(res,l->data[i--]);
}
void print(seqlist *l){
	for(int i=0;i<l->length;i++)
		printf("%c ",l->data[i]);
}
int main(){
	seqlist *l=(seqlist *)malloc(sizeof (seqlist));
	initlist(l);
	createlist(l);
	seqlist *res=(seqlist *)malloc(sizeof (seqlist));
	reverselist(l,res);
	print(res);
	return 0;
}
