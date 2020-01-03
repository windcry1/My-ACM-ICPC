#include<iostream>
#include<cstdlib>
#define max 1000 
using namespace std;
typedef struct orderlist
{
	int data[max];
	int length;
}sqlist;
void initlist(sqlist *&head,int n)
{
	head=(sqlist*)malloc(sizeof(sqlist));
	head->length=n;
    for(int i=0;i<n;i++)
        cin>>head->data[i];
}
sqlist *compare(sqlist *A,sqlist *B)
{
	int i=0,j=0,k=0;
	sqlist *C=(sqlist *)malloc(sizeof(sqlist));
    while(i<A->length&&j<B->length)
    {
    	if(A->data[i]<B->data[j])
    	   C->data[k++]=A->data[i++];
    	else
    		C->data[k++]=B->data[j++];
	}
	while(i<A->length)
		C->data[k++]=A->data[i++];
	while(j<B->length)
		C->data[k++]=B->data[j++];
	C->length=A->length+B->length;
	return C;
}
void output(sqlist  *C)
{
    for(int i=0;i<C->length;i++)
	    cout<<C->data[i]<<" ";
}
int main()
{
	sqlist *A=NULL,*B=NULL,*C;
	int m,n;
	cin>>m;
	initlist(A,m);
	cin>>n;
	initlist(B,n);
	C=compare(A,B);
	output(C);
	free(A);
	free(B);
	free(C);
	return 0;	
}
