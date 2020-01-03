//二叉树的先序输入与输出
#include <stdio.h>
#include
int cnt[1000];
void get_tree(char*,int);
void print_tree(char*,int);
int main(){
    char tree[1000];
    get_tree(tree,1);
    print_tree(tree,1);
    return 0;
}
void get_tree(char *tree,int sub){
    char t;
    scanf("%c",&t);
    tree[sub]=t;
    if(t=='#')
        return;
    get_tree(tree,2*sub);
    get_tree(tree,2*sub+1);
}
void print_tree(char *tree,int sub,int p){
    if(tree[sub]=='#')
        return;
    cnt[p]++;
    printf("%c",tree[sub]);
    print_tree(tree,2*sub,p+1);
    print_tree(tree,2*sub+1,p+1);
}
