vector<vector<int>> levelOrder(TreeNode* root) {
    if(root == nullptr){
        return {};
    }
    
    vector<vector<int>> res;
    std::queue<TreeNode*> q; 
    q.push(root);
    
    while(!q.empty()){
        int count = q.size();
        vector<int> ans;
        
        while(count > 0){
            TreeNode *currentNode = q.front();
            q.pop();
            
            ans.push_back(currentNode->val);
            
            if(currentNode->left){
                q.push(currentNode->left);
            }
            
            if(currentNode->right){
                q.push(currentNode->right);
            }
            
            count--;
        }
        
        res.push_back(ans);
    }
    
    return res;
}