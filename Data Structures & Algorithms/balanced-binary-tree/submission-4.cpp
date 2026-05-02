
class Solution {
public:
    int height(TreeNode* root){

        if(!root) return 0;
        int leftHeight = height(root -> left);
        int rightHeight = height(root -> right);

        return max(leftHeight,rightHeight) + 1;
    }

    bool isBalanced(TreeNode* root) {
        if(!root) {return true;}
        int leftHeight = height(root -> left);
        int rightHeight = height(root -> right);
        if(abs( leftHeight - rightHeight) > 1 ) return false;

        return isBalanced(root -> left) && isBalanced(root -> right);
    }
};
