int sumNumbers(TreeNode* root) {
    vector<int> paths;
    sumPath(root, paths, 0);
    
    int sum = accumulate(paths.begin(), paths.end(), 0);
    
    return sum;
}

void sumPath(TreeNode *root, vector<int> &paths, int currentNum){
    if(!root){
        return;
    }
    
    currentNum += root->val;
    
    if(!root->left && !root->right){
        paths.push_back(currentNum);
    }else {
        sumPath(root->left,paths, currentNum * 10);
        sumPath(root->right, paths, currentNum * 10);
    }
    
    currentNum % 10;
    currentNum /= 10;
}