/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(struct TreeNode *root)
    {
        if(root==NULL)
        return 0;
        return fmax(height(root->left),height(root->right))+1;
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
        if(root==NULL)
        return 0;

        int lefth=height(root->left);
        int righth=height(root->right);
        int leftdia=diameterOfBinaryTree(root->left);
        int rightdia=diameterOfBinaryTree(root->right);
        int res=fmax(lefth+righth,leftdia);

        return fmax(res,rightdia); 
    }
};