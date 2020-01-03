#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define ElemType int
#define  KeyType int
typedef struct BiTNode
{
    int data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;
int search(BiTree T, KeyType key) {
    if (key == T->data) {
        return 0;
    }
    else if (key < T->data) {
    	int t = search(T->lchild, key);
        return (t==0?-1:t);
    }
    else {
    	int t = search(T->rchild, key);
        return (t==0?1:t);
    }
}
int SearchBST(BiTree T, KeyType key, BiTree f, BiTree *p) {
    if (!T) {
        *p = f;
        return 0;
    }
    else if (key == T->data) {
        *p = T;
        return 1;
    }
    else if (key < T->data) {
        return SearchBST(T->lchild, key, T, p);
    }
    else {
        return SearchBST(T->rchild, key, T, p);
    }
}
int InsertBST(BiTree *T, ElemType e) {
    BiTree p = NULL;
    if (!SearchBST((*T), e, NULL, &p)) {
        BiTree s = (BiTree)malloc(sizeof(BiTNode));
        s->data = e;
        s->lchild = s->rchild = NULL;
        if (!p) {
            *T = s;
        }
        else if (e < p->data) {
            p->lchild = s;
        }
        else {
            p->rchild = s;
        }
        return 1;
    }
    return 0;
}
int main(){
	BiTree root = NULL;
	int n,k,i; 
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		int t;
		scanf("%d",&t);
		InsertBST(&root,t);
	}
	printf(search(root,k)==1?"Left child":"Right child");
	return 0;
}
