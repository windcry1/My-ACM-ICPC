#include<bits/stdc++.h>
using namespace std;
struct node
{
    int w;
    node *next;
};
bool ok(node *head)
{
    int len=0;
    node *it=head;
    while(it!=NULL) len++,it=it->next;
    //printf("len:%d\n",len);
 
    node *it1=new node();
    for(int i=1;i<=len/2;++i){
        node *ne=head->next;
        head->next=it1->next;
        it1->next=head;
        head=ne;
    }
    for(it=head;it!=NULL;it=it->next){
    	cout<<it->w<<" ";
	}
	cout<<endl;
    if(len%2) head=head->next;
    it1=it1->next;
    while(it1!=NULL) {
		if(it1->w!=head->w) return 0;
		it1=it1->next;
		head=head->next;
	}
	return 1;
}
int main()
{
    node *head,*p;
    head=new node();
    p=head;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
        node *ne=new node();
        int x;
        scanf("%d",&x);
        ne->w=x;
        p->next=ne;
        p=p->next;
    }
 
    printf("%d\n",ok(head->next));
}
/*
6
1 2 3 3 2 1
*/
