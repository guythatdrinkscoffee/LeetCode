vector<vector<int>> levelOrderBottom(TreeNode* root) {
    if(!root){
        return {};
    }
    
    vector<vector<int>> ans;
    queue<TreeNode*> q;
    q.push(root);
    
    while(!q.empty()){
        int count = q.size();
        vector<int> currentLevel;
        
        while(count > 0){
            TreeNode *current = q.front();
            q.pop();
            
            currentLevel.push_back(current->val);
            
            if(current->left){
                q.push(current->left);
            }
            
            if(current->right){
                q.push(current->right);
            }
            
            count--;
        }
        
        ans.insert(ans.begin(),currentLevel);
    }
    
    return ans;
}