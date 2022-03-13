bool leafSimilar(TreeNode* root1, TreeNode* root2) {
    if(!root1 && !root2){ return false ;}
    if(!root1 || !root2){ return false ;}
        
    vector<int> t1;
    vector<int> t2;
    
    dfs(root1, t1);
    dfs(root2,t2);

    return t1 == t2;
}

void dfs(TreeNode* root, vector<int> &leafs){
    if(!root){
        return;
    }
    
    if(!root->left && !root->right){
        leafs.push_back(root->val);
    }else{
        dfs(root->left, leafs);
        dfs(root->right, leafs);
    }
}