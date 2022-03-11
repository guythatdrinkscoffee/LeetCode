vector<int> largestValues(TreeNode* root) {
    if(!root){
        return {};
    }
    
    vector<int> largestPerLevel;
    queue<TreeNode*> q;
    q.push(root);
        
    while(!q.empty()){
        int count = q.size();
        
        int currentMax = INT_MIN;
        
        while(count > 0){
            TreeNode *current = q.front();
            q.pop();
            
            currentMax = max(currentMax, current->val);
            
            if(current->left){
                q.push(current->left);
            }
            
            if(current->right){
                q.push(current->right);
            }
            
            count--;
        }

        largestPerLevel.push_back(currentMax);
        currentMax = INT_MIN;
    }
    
    return largestPerLevel;
}