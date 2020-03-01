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
	for(int i=0;i<l1->length;i++) insert(res,l1->data[i]);
	for(int i=0;i<l2->length;i++){
		int ok=0;
		for(int j=0;j<l1->length;j++){
			if(l1->data[j]==l2->data[i]){
				ok=1;
				break;
			}
		}
		if(ok==0) insert(res,l2->data[i]);
	}
}
void print(seqlist *l){
	for(int i=0;i<l->length;i++)
		printf("%d ",l->data[i]);
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
