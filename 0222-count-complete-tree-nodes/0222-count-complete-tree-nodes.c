/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int countNodes(struct TreeNode* root) {
    
    if(root==NULL)
    return 0;
    int lp=countNodes(root->left);
    int rp=countNodes(root->right);

    return 1+lp+rp;
}