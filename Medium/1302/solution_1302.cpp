int deepestLeavesSum(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);
    int deepestLeavesSum = 0;   
    
    while(!q.empty()){
        int count = q.size();
        deepestLeavesSum = 0;
        
        while(count > 0){
            TreeNode *current = q.front();
            q.pop();
            
            deepestLeavesSum += current->val;
            
            if(current->left){
                q.push(current->left);
            }
            
            if(current->right){
                q.push(current->right);
            }
            
            count--;
        }
    }
    

    return deepestLeavesSum;
}