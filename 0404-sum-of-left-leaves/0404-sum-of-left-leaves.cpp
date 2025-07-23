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
    int sumOfLeftLeaves(TreeNode* root) {
       if(root==NULL) return 0;
       int total=0;
       if(root->left!=NULL){
        if(root->left->left==NULL && root->left->right==NULL){
            total+=root->left->val;
        }else{
            total+=sumOfLeftLeaves(root->left);
        }
        
       
       }
        total+=sumOfLeftLeaves(root->right);
         return total;
    }
};