/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void invert(TreeNode* root) {
        if (root->left != nullptr || root->right != nullptr) {
            TreeNode* tmp = root->left;
            root->left = root->right;
            root->right = tmp;
        }
        if (root->left != nullptr) {
            invert(root->left);
        }
        if (root->right != nullptr) {
            invert(root->right);
        }
    }

    TreeNode* invertTree(TreeNode* root) {
        if (root != nullptr) {
            TreeNode* head = root;
            invert(root);
            return head;
        }
        return root;
    }
};
