vector<int> postorder(Node* root) {
    vector<int> ans;
    dfs(root, ans);
    return ans;
}

void dfs(Node* root, vector<int> &arr){
    if(!root){
        return;
    }
    
    for(auto n: root->children){
        dfs(n, arr);
    }
    
    arr.push_back(root->val);
}