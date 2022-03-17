vector<vector<int>> levelOrder(Node* root) {
    if(!root){
        return {};
    }
    
    vector<vector<int>> levels;
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        int count = q.size();
        vector<int> currentLevel;
        
        for(int i = 0; i < count ; i++){
            Node* current = q.front();
            q.pop();
            
            currentLevel.push_back(current->val);
            
            for(auto child: current->children){
                q.push(child);
            }
            
        }
            
        levels.push_back(currentLevel);
    }
    
    return levels;
}