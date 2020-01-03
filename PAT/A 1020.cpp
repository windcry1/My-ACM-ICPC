#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include<cstring>
#include<iostream>
using namespace std;
typedef struct node
{
	char data ;
	struct node * leftChild ;
	struct node * rightChild ;
}BTNode;
BTNode *createBT(char *post , char *in ,int n)
{
	BTNode *b;
	char *p ,root ;
	int k ;
	if(n<=0)
		return NULL;
	root=*(post+n-1) ;
	b=new BTNode;
	b->data = root ;
	for(p=in;p<in+n;p++)
	{
		if(*p == root)
			break;
	}
	k=p-in;
	b->leftChild = createBT(post,in,k);
	b->rightChild = createBT(post+k,p+1,n-k-1);  //???????
	return b ;
}
void showBTPreOrder(BTNode *&b)
{
	if(b!=NULL)
	{
		if(b->leftChild!=NULL)
			printf(" %c",b->leftChild->data);
		if(b->rightChild!=NULL)
			printf(" %c",b->rightChild->data);
		showBTPreOrder(b->leftChild);
		showBTPreOrder(b->rightChild);
	}
}
char in[10000000]={'\0'},post[10000000]={'\0'};
int main()
{
	BTNode *b = NULL ;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>post[i];
	for(int i=0;i<n;i++)
		cin>>in[i];
	b=createBT(post,in,n);
	printf("%c",b->data);
	showBTPreOrder(b);
	return 0 ;
}
