int minDepth(TreeNode* root) {
    if(!root){
        return 0;
    }
    
    int depth = 0;
    
    queue<TreeNode*> q;
    q.push(root);
    
    while(!q.empty()){
        int count = q.size();
        depth++;
        
        while(count > 0){
            TreeNode *current = q.front();
            q.pop();
            
            if(!current->left && !current->right){
                return depth;
            }
            
            if(current->left){
                q.push(current->left);
            }
            
            if(current->right){
                q.push(current->right);
            }
            
            count--;
        }
    }
    
    return depth;
}