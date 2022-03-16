int rangeSumBST(TreeNode* root, int low, int high) {
    int sum = 0;
    dfs(root,low,high,sum);
    return sum;
}

void dfs(TreeNode* root, int low, int high, int &count){
    if(!root){
        return;
    }
    
    if(root->val >= low && root->val <= high) {
        count += root->val;
    }
    
    dfs(root->left, low, high, count);
    dfs(root->right, low, high , count);
}