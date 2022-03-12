    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        vector<vector<int>> paths;
        findPaths(root, path, paths, targetSum);
        return paths;
    }
    
    void findPaths(TreeNode *root,  vector<int> &path, vector<vector<int>> &paths, int target){
        if(!root){
            return;
        }
        
        path.push_back(root->val);
        
        if(root->val == target && !root->left && !root->right){
            paths.push_back(path);
        }else {
            findPaths(root->left, path, paths, target - root->val);
            findPaths(root->right, path, paths, target - root->val);
        }
        
        path.pop_back();
    }