
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
//*preorders��������ַ�����inorder��������ַ���

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

/*node* BinaryTreeFromOrderings(char* inorder, char* aftorder, int length)//������ͬʱ����
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
    ǰһ�������򣬺�һ��������
    */
    //���AEFDHZMG
    /*
    ADEFGHMZ
    AEFDHZMG
    ǰһ�������򣬺�һ���Ǻ���
    */
    //���GDAFEMHZ
    return 0;
}
