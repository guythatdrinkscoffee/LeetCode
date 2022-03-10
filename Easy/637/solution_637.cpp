vector<double> averageOfLevels(TreeNode* root) {
    if(!root){
        return {};
    }
    
    vector<double> ans;
    queue<TreeNode*> q;
    
    q.push(root);
    
    while(!q.empty()){
        int count = q.size();
        long sum = 0;

        for(int i = 0; i < count; i++){
            TreeNode *current = q.front();
            q.pop();
            
            sum += current->val;
            
            if(current->left){
                q.push(current->left);
            }
            
            if(current->right){
                q.push(current->right);
            }
        }
        
        double avg = (double)sum / count;
        ans.push_back(avg);
    }
    
    return ans;
}