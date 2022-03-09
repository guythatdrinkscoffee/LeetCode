vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    if(!root){
        return {};
    }
    
    vector<vector<int>> res;
    queue<TreeNode*> q;
    q.push(root);
    
    bool alternate = false;
    
    while(!q.empty()){
        int count = q.size();
        vector<int> currentLevel;
        
        while(count > 0){
            TreeNode *current = q.front();
            q.pop();
            
            if(alternate){
                currentLevel.insert(currentLevel.begin(), current->val);
            }else{
                currentLevel.push_back(current->val);
            }
            
            if(current->left){
                q.push(current->left);
            }
            
            if(current->right){
                q.push(current->right);
            }
            
            count--;
        }
        
        alternate = !alternate;
        res.push_back(currentLevel);
    }
    
    return res;
}