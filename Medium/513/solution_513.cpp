int findBottomLeftValue(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);
    
    int leftMostValue = root->val;
    
    while(!q.empty()){
        int count = q.size();
        
        leftMostValue = q.front()->val;
        
        while(count--){
            TreeNode *current = q.front();
            q.pop(); 
            
            if(current->left){
                q.push(current->left);
            }
            
            if(current->right){
                q.push(current->right);
            }
        }
    }
    
    return leftMostValue;
}