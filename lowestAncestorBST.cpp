/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    vector<int> val;
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return NULL;
        val.push_back(root -> val);
        if(p->val > root->val && q->val > root->val){
            return lowestCommonAncestor(root->right,p,q);
        }
        if(p->val < root->val && q->val < root->val){
            return lowestCommonAncestor(root->left,p,q);
        }
        
        for(int i = 0 ; i<val.size() ; i++){
            cout<<val[i]<<endl;
        }
        return NULL;
    }
};