#include <iostream>
#include <fstream>
#include <string>
#include <string>
using namespace std;
struct TreeNode
{
    struct TreeNode* left;
    struct TreeNode* right;
    char  elem;
};
TreeNode* BinaryTreeFromOrderings(string inorder, string aftorder, int length)
{
    if(length == 0)
    {
        return NULL;
    }
    TreeNode* node = new TreeNode;//Noice that [new] should be written out.
    node->elem = *(aftorder.begin()+length-1);
    cout<<node->elem<<endl;
    int rootIndex = 0;
    for(rootIndex = 0;rootIndex < length; rootIndex++)//a variation of the loop
    {
        if(inorder[rootIndex] ==  *(aftorder.begin()+length-1))
            break;
    }
    node->left = BinaryTreeFromOrderings(inorder aftorder , rootIndex);
    node->right = BinaryTreeFromOrderings(inorder + rootIndex + 1, aftorder + rootIndex , length - (rootIndex + 1));

    return node;
}

int main(const int argc,const char** argv)
{
    string af;    
    string in;
    cin>>af>>in;
    BinaryTreeFromOrderings(in, af, af.length());
    return 0;
}
