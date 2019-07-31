#include<iostream>

struct BST
{   
    int val;
    BST* left;
    BST* right;
    BST(int v=0):val(v),left(NULL),right(NULL){}
};


bool IsBalanced(BST* root, int *pDepth)
{
    if(root == NULL)
    {
        *pDepth = 0;
        return true;
    }
    
    int left, right;
    if(IsBalanced(root->left, &left) && IsBalanced(root->right, &right))
    {
        int diff = left - right;
        if(diff >= -1 && diff <= 1)
        {
            *pDepth = 1 + (left > right ? left : right);
            return true;
        }
    }
    return false;
}

bool IsBalanced(BST* root)
{
    int depth = 0;
    return IsBalanced(root, &depth);
}

