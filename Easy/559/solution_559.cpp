int maxDepth(Node* root) {
    if(!root){
        return 0;
    }        
    
    queue<Node *> q;
    q.push(root);
    int depth = 0;
    while(!q.empty()){
        int count = q.size(); 
        depth++;
        
        while(count > 0){
            Node* current = q.front();
            q.pop();
            for(auto n : current->children){
                q.push(n);
            }
            
            count--;
        }
    }
    
    return depth;
}