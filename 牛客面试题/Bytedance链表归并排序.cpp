#include <iostream>
using namespace std;
typedef struct Node{
    int val;
    struct Node *next;
}node;
node *merge(node *l1,node *l2){
    node *root=(node*)malloc(sizeof(node));
    root->next=l1;
    node *p1=root,*p2=l2;
    while(p1->next && p2){
        if(p1->next->val > p2->val){
            l2 = p2->next;
            p2->next = p1->next;
            p1->next = p2;
            p1 = p2;
            p2 = l2;
        }
        else{
            p1 = p1->next;
        }
    }
    if(p1->next == NULL){
        p1->next = p2;
    }
    return root->next;
}
node *merge_sort(node *head){
    if(head==NULL or head->next==NULL)
		return head;
    node *a=head,*b=head;
    while(b->next and b->next->next){
        b = b->next->next;
        a = a->next;
    }
    node *left=head,*right=a->next;
    a->next=NULL;
    left = merge_sort(left);
    right = merge_sort(right);
    return merge(left,right);
}
int main() {
    node* root = (node *) malloc(sizeof(node));
    int v;
    node *now=root;
    while(cin>>v){
        node* tt = (node *) malloc(sizeof(node));
        now->next = tt;
        now=now->next;
        now->next = NULL;
        now->val = v;
    }
    root = merge_sort(root->next);
    for(node *head=root;head!=NULL;head=head->next){
        cout<<head->val<<" ";
    }
}
