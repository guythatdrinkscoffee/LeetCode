TreeNode* invertTree(TreeNode* root) {
    if(!root){
        return nullptr;
    }

    dfs(root);
    return root;
}

void dfs(TreeNode* root){
    if(!root){
        return ;
    }
    
    dfs(root->left);
    dfs(root->right);
    
    TreeNode* t = root->left;
    root->left = root->right;
    root->right = t;
}