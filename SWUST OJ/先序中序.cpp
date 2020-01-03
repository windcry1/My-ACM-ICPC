#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
typedef struct node
{
	char data ;
	struct node * leftChild ;
	struct node * rightChild ;
}BTNode;
BTNode *createBT(char *pre , char *in ,int n)
{
	BTNode *b;
	char *p;
	int k;
	if(n<=0)
		return NULL;
	b=new BTNode;
	b->data = *pre ;
	for(p=in;p<in+n;p++)//在中序里面寻找前序的那个地址 
	{
		if(*p == *pre)
			break;
	}
	k=p-in;//找到相对位置 
	b->leftChild = createBT(pre+1,in,k);
	b->rightChild = createBT(pre+1+k,p+1,n-k-1);
	return b;
}
void showBTPostOrder(BTNode *b)
{
	if(b != NULL)
	{
		showBTPostOrder(b->leftChild);
		showBTPostOrder(b->rightChild);
		printf("%c",b->data);
	}
}
int main()
{
	BTNode *b = NULL ;
	char in[1000],pre[1000];
	cin>>in>>pre;
	b=createBT(pre,in,strlen(in));
	showBTPostOrder(b);
	return 0 ;
}
