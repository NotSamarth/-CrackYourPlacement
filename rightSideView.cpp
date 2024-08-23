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
private:
    vector<int> vec;
    int level = 0;

public:
    void traverse(TreeNode* head , int level){
        if(head == nullptr){
            return;
        }
        if(vec.size()==level){
            vec.push_back(head->val);
        }
        traverse(head->right,level+1);
        traverse(head->left,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        traverse( root , level);
        return vec;
    }
};