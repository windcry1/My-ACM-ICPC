#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	char data;
	struct Node *ls,*rs;
}node;
int res=0;
void init(node *tree){
	char t;scanf(" %c",&t);
	tree->data=t;
	if(t=='0') return ;
	tree->ls=(node *)malloc(sizeof (node));
	tree->rs=(node *)malloc(sizeof (node));
	init(tree->ls);
	init(tree->rs);
}
void print1(node *tree){
	if(tree->data=='0') return ;
	printf("%c ",tree->data);
	if(tree->ls->data=='0' && tree->rs->data=='0') ++res;
	print1(tree->ls);
	print1(tree->rs);
}
void print2(node *tree){
	if(tree->data=='0') return ;
	print2(tree->ls);
	printf("%c ",tree->data);
	print2(tree->rs);
}
void print3(node *tree){
	if(tree->data=='0') return ;
	print3(tree->ls);
	print3(tree->rs);
	printf("%c ",tree->data);
}
int main(){
	node *root=(node *)malloc(sizeof (node));
	init(root);
	print1(root);
	putchar('\n');
	print2(root);
	putchar('\n');
	print3(root);
	putchar('\n');
	printf("%d\n",res);
	return 0;
}


