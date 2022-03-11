int maxLevelSum(TreeNode* root) {
    if(!root){ return 0; }
    
    unordered_map<int,int> tbl;
    queue<TreeNode*> q;
    q.push(root);
    
    int depth = 0;
    int sum = 0;
    int maxSum = INT_MIN;
    
    while(!q.empty()){
        int count = q.size();
        sum = 0;
        depth++;
        
        while(count > 0){
            TreeNode *current = q.front();
            q.pop();
            
            sum += current->val;
            
            if(current->left){
                q.push(current->left);
            }
            
            if(current->right){
                q.push(current->right);
            }
            
            count--;
        }
        
        maxSum = max(maxSum, sum);
        tbl[sum] = depth;
    }
    
    return tbl.size() == 1 ? 1 : tbl[maxSum]; 
}