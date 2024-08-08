
class Solution {
public:
    bool mirror(TreeNode* p,TreeNode* q){
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;
        
        if(p->val != q->val) return false;
        
        // recursion

        return mirror(p->left,q->right) && mirror(p->right,q->left);;
        
    }
    bool isSymmetric(TreeNode* root) {
        if(mirror(root->left,root->right)!=true) return false;
        else return true;
        
    }
};