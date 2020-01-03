
#include<stdio.h>
#include<string.h>
#include<string>
#include<iostream>
using namespace std;
typedef struct TreeNode
{
    char val;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;
//*preorders是先序的字符串，inorder是中序的字符串

TreeNode *BinaryTreePostorderings(char *Postorder, char *Inorder, int len)
{
    if (len == 0)
        return NULL;
    TreeNode *node = new TreeNode;
    node->val = *(Postorder + len - 1);
    cout << node->val;
    int rootIndex = 0;
    while (rootIndex<len)
    {
        if (Inorder[rootIndex] == *(Postorder + len - 1))
            break;
        ++rootIndex;
    }
    node->left = BinaryTreePostorderings(Postorder, Inorder, rootIndex);
    node->right = BinaryTreePostorderings(Postorder + rootIndex, Inorder + rootIndex + 1, len - (rootIndex + 1));
    return node;
}

/*node* BinaryTreeFromOrderings(char* inorder, char* aftorder, int length)//求先序，同时建树
{
    if(length == 0)
    {
        return NULL;
    }
    node* Node = new node;//Noice that [new] should be written out.
    Node->data= *(aftorder+length-1);
  cout<<Node->data;
    int rootIndex = 0;
    for(;rootIndex < length; rootIndex++)//a variation of the loop
    {
        if(inorder[rootIndex] ==  *(aftorder+length-1))
            break;
    }
    Node->leftchild = BinaryTreeFromOrderings(inorder, aftorder , rootIndex);
    Node->rightchild= BinaryTreeFromOrderings(inorder + rootIndex + 1, aftorder + rootIndex , length - (rootIndex + 1));
    return Node;
}*/
int main()
{
    int i,j,k,cur,last;
    char s1[1000],s2[1000];
    while(scanf("%s",s1)!=EOF)
    {
        scanf("%s",s2);
        //posttraverse(s1,s2,strlen(s1));
        BinaryTreePostorderings(s2,s1,strlen(s1));
        //BinaryTreeFromOrderings(s1,s2,strlen(s1));
    }
    /*
    GDAFEMHZ
    ADEFGHMZ
    前一个是先序，后一个是中序
    */
    //结果AEFDHZMG
    /*
    ADEFGHMZ
    AEFDHZMG
    前一个是中序，后一个是后序
    */
    //结果GDAFEMHZ
    return 0;
}
