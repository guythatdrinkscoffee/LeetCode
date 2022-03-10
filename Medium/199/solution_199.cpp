vector<int> rightSideView(TreeNode* root) {
    if(!root){
        return {};
    }
    
    vector<int> ans;
    queue<TreeNode*> q;
    q.push(root);
    
    while(!q.empty()){
        int count = q.size();
        
        for(int j = 0; j < count; j++){
            TreeNode *current =  q.front();
            q.pop();
            
            if(j == count - 1){
                ans.push_back(current->val);
            }
            
            if(current->left){
                q.push(current->left);
            }
            
            if(current->right){
                q.push(current->right);
            }
        }
    }
    
    return ans;
}