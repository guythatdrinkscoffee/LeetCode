int sumOfLeftLeaves(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);
    
    int leftLeavesSum = 0;

    while(!q.empty()){
        int count = q.size();

        for(int i = 0; i < count; i++){
            TreeNode *current = q.front();
            q.pop();
                
            if(current->left){
                if(!current->left->left && !current->left->right){
                    leftLeavesSum += current->left->val;
                }
                
                q.push(current->left);
            }
            
            if(current->right){
                q.push(current->right);
            }
        }
    }
    
    return leftLeavesSum;
}