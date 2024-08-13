class Solution{
public:
    int getCount(Node* root, int low, int high)
    {
    	if (!root) 
    	    return 0;
    
    	//if data at current node is equal to lower and upper range, we return 1.
    	if (root->data == high && root->data == low)
    		return 1;
    
    	//if data at current node is within range then we include it in count 
    	//and call function recursively for its left and right children.
    	if (root->data <= high && root->data >= low)
    		return 1+getCount(root->left,low,high)+getCount(root->right,low,high);
    
    	//else if data at current node is smaller than lower range then
    	//we call function recursively only for right child.
    	else if (root->data < low)
    		return getCount(root->right, low, high);
    
    	//else we call function recursively only for left child.
    	else return getCount(root->left, low, high);
    }
};