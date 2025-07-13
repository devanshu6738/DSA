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
    bool parent(TreeNode* root,int x,int y){
        if(root==NULL){
            return 0;
        }
       if(root->left && root->right){
         if(root->left->val==x && root->right->val==y){
            return 1;
        }
        if(root->left->val==y && root->right->val==x){
            return 1;
        }
       }
       return parent(root->right,x,y)||parent(root->left,x,y);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*>q;
        q.push(root);
        int level1=-1;
        int level2=-1;
        int level=0;
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode *node=q.front();
                q.pop();
                if(node->val==x){
                    level1=level;
                }
                if(node->val==y){
                    level2=level;
                }
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
                
            }
            level++;
            if(level1!=level2){
                return 0;
            }
            if(level1!=-1){
                break;
            }
        }
        return !parent(root,x,y);


    }
};