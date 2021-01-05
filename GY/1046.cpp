#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
typedef struct snode{
	int data;
	struct snode *next;
}linkstack;
void init(linkstack *l){
	l->next=NULL;
}
bool empty(linkstack *l){
	return l->next==NULL;
}
void push(linkstack *l,int e){
	linkstack *p=(linkstack *)malloc(sizeof (linkstack));
	p->data=e;
	p->next=l->next;
	l->next=p;
}
void pop(linkstack *l){
	if(empty(l)) return;
	linkstack *temp=l->next;
	l->next=temp->next;
	free(temp);
}
int main(){
	linkstack *l=(linkstack *)malloc(sizeof (linkstack));
	init(l);
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int k;
		scanf("%d",&k);
		push(l,k);
	}
	int m;
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		pop(l);
	}
	if(empty(l)) printf("-1\n");
	else{
		printf("%d\n",l->next->data);
	}
}

