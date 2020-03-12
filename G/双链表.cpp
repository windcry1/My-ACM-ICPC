#include<stdio.h>
#include<stdlib.h>
typedef struct List{
	int data;
	struct List *next;
	struct List *head;
}list;
void createlist(list *l){
	int n;scanf("%d",&n);
	list *now=l;
	for(int i=0;i<n;i++){
		now->next=(list *)malloc(sizeof (list));
		list *temp=now;
		now=now->next;
		now->head=temp;
		int data;scanf("%d",&data);
		now->data=data;
	}
	now->next=NULL;
}
void erase(list *l){
	for(list *i=l->next;i->next!=NULL;i=i->next){
		if(i->data==i->next->data){
			i->next->head=i->head;
			i->head->next=i->next;
			list *temp=i;
			i=i->head;
			free(temp);
		}
	}
}
void print(list *l){
	for(list *i=l->next;i!=NULL;i=i->next){
		printf("%d ",i->data);
	}
}
int main(){
	list *l=(list *)malloc(sizeof (list));
	createlist(l);
	erase(l);
	print(l);
	return 0;
}

