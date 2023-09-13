#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void flatten(TreeNode *root)
{
    if (!root)
    {
        return;
    }
    if (root->left)
    {
        flatten(root->left);
    }
    if (root->right)
    {
        flatten(root->right);
    }
    if (root->left)
    {
        TreeNode *left = root->left;
        left->right = root->right;
        root->right = left;
    }
}

int main()
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    TreeNode* ans = root;
    flatten(root);
    while(ans){
        cout<<ans->val<<"->";
        ans = ans->right;
    }
    return 0;
}