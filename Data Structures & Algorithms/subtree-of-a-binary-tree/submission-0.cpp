
class Solution {
public:
    bool checkif(TreeNode* root, TreeNode* subRoot){
        if(!root && !subRoot) return true;
        if(!root || !subRoot) return false;
        if(root -> val != subRoot -> val) return false;
        return checkif(root->left , subRoot -> left) && checkif(root->right , subRoot -> right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
     if (!root || !subRoot) return false;
     if (checkif(root,subRoot)) return true;
    return isSubtree(root->left , subRoot ) || isSubtree(root->right , subRoot);
   
    }
};
