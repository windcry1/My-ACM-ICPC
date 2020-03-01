#include<stdio.h>
#include<stdlib.h>
typedef struct List{
	int data;
	struct List *next;
}list;
void createlist(list *l){
	int n;scanf("%d",&n);
	list *now=l;
	for(int i=0;i<n;i++){
		now->next=(list *)malloc(sizeof (list));
		now=now->next;
		int data;scanf("%d",&data);
		now->data=data;
	}
	now->next=NULL;
}
void print(list *l){
	for(list *i=l->next;i!=NULL;i=i->next){
		printf("%d ",i->data);
	}
}
int main(){
	list *l=(list *)malloc(sizeof (list));
	createlist(l);
	print(l);
	return 0;
}


