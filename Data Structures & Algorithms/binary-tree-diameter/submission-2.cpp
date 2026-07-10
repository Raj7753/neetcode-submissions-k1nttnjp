

class Solution {
public:
    int result = 0;

    int function(TreeNode* root){
        if(root == NULL) return 0;
        int left = function(root -> left);
        int right = function(root -> right);

         result = max(result, left+right);  

        return max(left,right) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        function (root);
        return result;
    }
};
